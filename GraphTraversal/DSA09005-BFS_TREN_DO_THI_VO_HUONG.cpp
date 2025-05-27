#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<sstream>
#include<queue>

using namespace std;

class Graph{
private:
	int n;
	vector<vector<int>> adj;
	vector<int> result;
	vector<bool> visited;
public:
	Graph(int n):n(n){
		adj.resize(n+1);
		visited.resize(n+1);
	}
	void addEdge(int u,int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	void bfs(int u){
		queue<int> q;
		q.push(u);
		visited[u]=true;
		while(!q.empty())
		{
			int current=q.front();q.pop();
			result.push_back(current);
			for(int v:adj[current])
			{
				if(!visited[v])
				{
					visited[v]=true;
					q.push(v);
				}
			}
		}
	}
	void display(int start){
		fill(visited.begin(),visited.end(),false);
		bfs(start);
		for(int p:result) cout<<p<<" ";
		cout<<endl;
		result.clear();
	}
};

void solve()
{
	int n,k,start;
	cin>>n>>k>>start;
	Graph g(n);
	for(int i=1;i<=k;i++){
		int u,v;cin>>u>>v;
		g.addEdge(u,v);
	}
	g.display(start);
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
