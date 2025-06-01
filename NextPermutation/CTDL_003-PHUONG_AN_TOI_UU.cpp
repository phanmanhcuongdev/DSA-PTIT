#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>

using namespace std;

int MAX=100000000;
int n;int w;
vector<int> giatri;
vector<int> trongluong;

vector<int> xopt;
int fopt=0;

vector<int> temp;
int curr_weight=0;
int curr_value=0;

void fileIO()
{
	freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
}

void Try(int i)
{
	if(i>n)
	{
		if(curr_weight<=w&&curr_value>fopt)
		{
			xopt=temp;
			fopt=curr_value;
			
		}
		return;
	}
	temp[i]=0;
	Try(i+1);
	if(curr_weight+trongluong[i]<=w)
	{
		temp[i]=1;
		curr_weight+=trongluong[i];
		curr_value+=giatri[i];
		Try(i+1);
		curr_weight-=trongluong[i];
		curr_value-=giatri[i];
		temp[i]=0;
	}
}

int main()
{
	//fileIO();
	cin>>n>>w;
	giatri.resize(n+1);
	trongluong.resize(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>giatri[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>trongluong[i];
	}
	temp.resize(n+1);
	Try(1);
	cout<<fopt<<"\n";
	for(int i=1;i<=n;i++)
	{
		cout<<xopt[i]<<" ";
	}
}
