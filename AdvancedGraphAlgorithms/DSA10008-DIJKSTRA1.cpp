#include<iostream>
#include<climits>
#include<vector>
#include<tuple>
// cùng là code DSA10008 nhưng code này dùng bellmanford
using namespace std;

const int MAXN = 1005;
const int INF = 1e9;
vector<tuple<int,int,int>> edges;
int m,n,s;
int dist[MAXN];

void bellmanford(int start) {
    for (int i=1;i<=n;i++) {
        dist[i]=INF;
    }
    dist[start]=0;
    for (int i=1;i<=n-1;++i) {
        for (auto [u,v,w]:edges) {
            if (dist[u]+w<dist[v]) {
                dist[v]=dist[u]+w;
            }
        }
    }
    for (int i=1 ;i<=n;i++) {
        cout<<dist[i]<<' ';
    }
    cout<<'\n';
}

void solve() {
    cin>>n>>m>>s;
    edges.clear();
    for (int i=1;i<=m;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
        edges.push_back({v,u,w});
    }
    bellmanford(s);
}

int main() {
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
