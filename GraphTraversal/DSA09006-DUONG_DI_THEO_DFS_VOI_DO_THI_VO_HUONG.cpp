#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Graph{
private:
	int n;
	vector<vector<int>> adj;
	vector<bool> visited;
	vector<int> parent;
	bool found;
public:
	Graph(int n):n(n){
		adj.resize(n+1);
		parent.resize(n+1);
		visited.resize(n+1);
	}
	
	void addEdge(int u,int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	void dfs(int u,int end){
		visited[u]=true;
		if(u==end){
			found=true;
			return;
		}
		for(int v:adj[u])
		{
			if(!visited[v])
			{
				parent[v]=u;
				dfs(v,end);
				if(found) return;
			}
		}
	}
	
	void findPath(int start,int end){
		fill(visited.begin(),visited.end(),false);
		fill(parent.begin(),parent.end(),-1);
		found=false;
		dfs(start,end);
		if(!found) {
			cout<<"-1\n";
		}
		else{
			vector<int> path;
			for(int u=end;u!=-1;u=parent[u]){
				path.push_back(u);
			}
			reverse(path.begin(), path.end());
			for(int x:path) cout<<x<<" ";
			cout<<endl;
		}
	}
};

void solve()
{
	int n,k,start,end;
	cin>>n>>k>>start>>end;
	Graph g(n);
	for(int i=0;i<k;i++){
		int u,v;cin>>u>>v;
		g.addEdge(u,v);
	}
	g.findPath(start,end);
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
