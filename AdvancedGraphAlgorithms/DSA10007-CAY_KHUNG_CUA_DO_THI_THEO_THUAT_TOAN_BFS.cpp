#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS_Tree(int u,vector<int> adj[],vector<bool> &visited,vector<pair<int,int>> &result) {
    visited[u]=true;
    queue<int> q;
    q.push(u);
    while (!q.empty()) {
        int cur=q.front();q.pop();
        for (auto x: adj[cur]) {
            if (!visited[x]) {
                visited[x]=true;
                result.push_back({cur,x});
                q.push(x);
            }
        }
    }
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m,start;
        cin>>n>>m>>start;
        vector<int> adj[n+1];
        for (int i=1;i<=m;i++) {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<pair<int,int>> result;
        vector<bool> visited(n+1,false);
        BFS_Tree(start,adj,visited,result);
        if (result.size()==n-1) {
            for (auto [x,y]: result) {
                cout<<x<<' '<<y<<'\n';
            }
        }else {
            cout<<-1<<'\n';
        }
    }
}
