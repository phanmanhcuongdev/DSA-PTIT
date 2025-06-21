#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Graph{
private:
	int n;
	vector<vector<int>> adj;
public:
	Graph(int n):n(n){
		adj.resize(n+1);
	}
	void addEdge(int u,int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	void display(){
		for(int i=1;i<=n;i++)
		{
			cout<<i<<": ";
			for(auto temp:adj[i]) cout<<temp<<" ";
			cout<<endl;
		}
	}
};

void solve()
{
	int n,k;cin>>n>>k;
	Graph g(n);
	for(int i=0;i<k;i++)
	{
		int u,v;cin>>u>>v;
		g.addEdge(u,v);
	}
	g.display();
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
