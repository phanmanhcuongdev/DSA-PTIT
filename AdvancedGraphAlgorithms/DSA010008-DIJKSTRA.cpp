#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <queue>
#include<climits>
using namespace std;

const int MAXN = 1001;
const int INF=1e9;

int n,m,start;
vector<pair<int,int>> adj[MAXN];
int dist[MAXN];

void dijkstra(int start) {
    for (int i=1;i<=n;i++) dist[i]=INF;
    dist[start]=0;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
    pq.push({0,start});
    while (!pq.empty()) {
        auto [du,u]=pq.top();pq.pop();

        if (du>dist[u]) continue;

        for (auto [v,w]: adj[u]) {
            if (dist[u]+w<dist[v]) {
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
}

void solve() {
    cin>>n>>m>>start;
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
    }
    for (int i=1;i<=m;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dijkstra(start);
    for (int i=1;i<=n;i++) {
        cout<<dist[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
