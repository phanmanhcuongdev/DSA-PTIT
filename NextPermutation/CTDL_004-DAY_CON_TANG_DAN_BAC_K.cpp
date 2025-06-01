#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<cstring>

using namespace std;

int n,k;
vector<int> input;
int curr_val=0;
int result=0;
vector<int> temp;

void Try(int count,int index)
{
	if(count==k) 
	{
		result++;
		return;
	}
	for(int i=index;i<=n;i++)
	{
		if(temp.empty()||input[i]>temp.back())
		{
			temp.push_back(input[i]);
			Try(count+1,i+1);
			temp.pop_back();
		}
	}
}

int main()
{
	cin>>n>>k;
	input.resize(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>input[i];
	}
	Try(0,1);
	cout<<result<<endl;
}
