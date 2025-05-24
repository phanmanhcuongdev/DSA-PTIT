#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t;cin>>t;while(t--)
	{
		int a,b;
		cin>>a>>b;
		vector<int> A[1001];
		for(int i=0;i<b;i++){
			int x,y;
			cin>>x>>y;
			A[x].push_back(y);
			A[y].push_back(x);
		}
		for(int i=0;i<a;i++)
		{
			cout<<i+1<<": ";
			for(auto z:A[i+1]) cout<<z<<" ";
			cout<<endl;
		}
		
	}
}
