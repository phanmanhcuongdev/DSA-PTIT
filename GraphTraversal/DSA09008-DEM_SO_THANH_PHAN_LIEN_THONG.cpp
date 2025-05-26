#include<iostream>
#include<stack>
#include<vector>

using namespace std;

class Graph{
private:
	int n;
	vector<vector<int>> adj;
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
	void dfs(int u){
		visited[u]=true;
		for(int v: adj[u]){
			if(!visited[v]) dfs(v);
		}
	}
	int tinh_thanh_phan_lien_thong(){
		int result=0;
		fill(visited.begin(),visited.end(),false);
		for(int i=1;i<=n;i++){
			if(!visited[i]){
				dfs(i);
				result++;
			}
		}
		return result;
	}
};

void solve()
{
	int n,k;
	cin>>n>>k;
	Graph g(n);
	for(int i=0;i<k;i++){
		int u,v;cin>>u>>v;
		if (u >= 1 && u <= n && v >= 1 && v <= n) {
            g.addEdge(u, v);
        }
	}
	cout<<g.tinh_thanh_phan_lien_thong()<<endl;
}
int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
