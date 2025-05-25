#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

class DiGraph{
	private:
		int n;
		vector<vector<int>> adj;
		vector<bool> visited;
		vector<int> parent;
	public:
		DiGraph(int n):n(n) {
			adj.resize(n+1);
			visited.resize(n+1);
			parent.resize(n+1);
		}	
		void addEdge(int u,int v){
			adj[u].push_back(v);
		}
		void bfs(int start,int end){
			queue<int> temp;
			temp.push(start);
			visited[start]=true;
			while(!temp.empty())
			{
				int u=temp.front();temp.pop();
				if(u==end) break;
				for(int v:adj[u])
				{
					if(!visited[v])
					{
						visited[v]=true;
						parent[v]=u;
						temp.push(v);
					}
				}
			}
		}
		void findPath(int start,int end){
			fill(visited.begin(),visited.end(),false);
			fill(parent.begin(),parent.end(),-1);
			bfs(start,end);
			if(!visited[end]) cout<<"-1\n";
			else{
				vector<int> path;
            	for (int v = end; v != -1; v = parent[v])
                	path.push_back(v);
            	reverse(path.begin(), path.end());
            	for (int v : path) cout << v << " ";
            	cout << "\n";
			}
		}
};

void solve()
{
	int n,k,start,end;
	cin>>n>>k>>start>>end;
	DiGraph g(n);
	for(int i=0;i<k;i++){
		int u,v;cin>>u>>v;g.addEdge(u,v);
	}
	g.findPath(start,end);
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
