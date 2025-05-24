#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int t;cin>>t;while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<pair<int,int>> Ex;
		vector<int> res[1001];
		for(int i=0;i<k;i++)
		{
			int a,b;
			cin>>a>>b;
			Ex.push_back({a,b});
			res[a].push_back(b);
		}
		for(int i=1;i<=n;i++)
		{
			sort(res[i].begin(),res[i].end());
			cout<<i<<": ";
			for(auto x:res[i])
			{
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}
