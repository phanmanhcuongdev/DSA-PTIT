#include<iostream>
#include<vector>

using namespace std;

class Graph{
private:
	int n;
	vector<vector<int>> adj;
	vector<int> result;
public:
	Graph(int n):n(n){
		adj.resize(n+1);
		result.resize(n+1);
	}
	void dfs(int u,vector<bool>& visited,int &res){
		visited[u]=true;
		res++;
		for(int v:adj[u])
		{
			if(!visited[v]){
				dfs(v,visited,res);
			}
		}
	}
	void addEdge(int u,int v)
	{
		adj[u].push_back(v);
	}
	void lienthongmanh(){
		for(int i=1;i<=n;i++)
		{
			vector<bool> visited(n+1,false);result[i]=0;
			dfs(i,visited,result[i]);
		}
		for(int i=1;i<=n;i++)
		{
			if(result[i]!=n) {
				cout<<"NO\n";
				return;
			}
		}
		cout<<"YES\n";
	}
};

void solve()
{
	int n,k;
	cin>>n>>k;
	Graph g(n);
	for(int i=0;i<k;i++)
	{
		int u,v;cin>>u>>v;
		g.addEdge(u,v);
	}
	g.lienthongmanh();
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
