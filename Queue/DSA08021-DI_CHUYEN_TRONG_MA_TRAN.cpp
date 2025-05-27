#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int minSteps(vector<vector<int>> &adj,int m,int n)
{
	vector<vector<bool>> visited(m,vector<bool> (n,false));
	queue<pair<pair<int,int>,int>> q;
	q.push({{0,0},0});
	visited[0][0]=true;
	int step=0;
	while(!q.empty())
	{
		auto [pos,step]=q.front();q.pop();
		int i=pos.first;int j=pos.second;
		if(i==m-1&&j==n-1) return step;
		int val=adj[i][j];
		if(i+val<m&&!visited[i+val][j]) 
		{
			visited[i+val][j]=true;
			q.push({{i+val,j},step+1});
		}
		if(j+val<n&&!visited[i][j+val])
		{
			visited[i][j+val]=true;
			q.push({{i,j+val},step+1});
		}
	}
	return -1;
}

void solve()
{
	int m,n;cin>>m>>n;
	vector<vector<int>> adj(m,vector<int> (n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>adj[i][j];
		}
	}
	cout<<minSteps(adj,m,n)<<endl;
}

int main()
{
	int t;cin>>t;while(t--) solve();
}
