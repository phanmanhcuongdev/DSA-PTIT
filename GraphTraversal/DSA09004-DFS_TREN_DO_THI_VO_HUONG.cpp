#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void dfs(int u,vector<int> Ex[1000],vector<bool> &visited,vector<int> &res)
{
	visited[u]=true;
	res.push_back(u);
	for(auto x:Ex[u]){
		if(!visited[x])
		{
			dfs(x,Ex,visited,res);
		}
	}
}

int main(){
	int t;cin>>t;while(t--)
	{
		int n,k,start;
		cin>>n>>k>>start;
		vector<pair<int,int>> Ex;
		vector<int> temp[1001];
		for(int i=0;i<k;i++)
		{
			int a,b;
			cin>>a>>b;
			Ex.push_back({a,b});
			temp[a].push_back(b);
			temp[b].push_back(a);
		}
		vector<bool> visited(n+1,false);
		vector<int> result;
		dfs(start,temp,visited,result);
		for(auto x:result) cout<<x<<" ";
		cout<<endl;
	}
}
