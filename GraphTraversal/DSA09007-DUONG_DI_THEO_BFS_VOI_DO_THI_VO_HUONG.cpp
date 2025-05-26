#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

class Graph{
private:
	int n;
	vector<vector<int>> adj;
	vector<bool> visited;
	vector<int> parent;
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
	
	void bfs(int u,int end){
		visited[u]=true;
		queue<int> q;
		q.push(u);
		while(!q.empty()){
			int temp=q.front();
			q.pop();
			if (temp == end) {
            return;
        	}
			for(int v:adj[temp]){
				if(!visited[v]){
					parent[v]=temp;
					visited[v]=true;
					q.push(v);
				}
			}	
		}
	}
	
	void findPath(int start,int end){
		fill(visited.begin(),visited.end(),false);
		fill(parent.begin(),parent.end(),-1);
		bfs(start,end);
		if(!visited[end]) {
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
