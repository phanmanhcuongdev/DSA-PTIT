#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	int n;
	cin>>n;cin.ignore();
	vector<vector<int>> res(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);int temp;
		while(ss>>temp)
		{
			res[i][temp-1]=1;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}	
