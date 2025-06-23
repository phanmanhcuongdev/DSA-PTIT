#include<iostream>

using namespace std;

const int INF = 1e9;
int n,m,query;
int ke[101][101];
int dist[101][101]={-1};
int nxt[101][101]={-1};

void init() {
    cin>>n>>m;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            ke[i][j]=(i==j?0:INF);
        }
    }
    for (int i=1;i<=m;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        ke[u][v]=ke[v][u]=min(ke[u][v],w);
    }
}

void floyd() {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            dist[i][j]=ke[i][j];
            nxt[i][j]=(ke[i][j]!=INF&&i!=j)?j:-1;
        }
    }
    for (int k=1;k<=n;k++) {
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                if (dist[i][k]!=INF&&dist[k][j]!=INF&&dist[i][j]>dist[i][k]+dist[k][j]) {
                    dist[i][j]=dist[i][k]+dist[k][j];
                    nxt[i][j]=nxt[i][k];
                }
            }
        }
    }
}

void solve() {
    floyd();
    cin>>query;
    while (query--) {
        int x,y;cin>>x>>y;
        cout<<dist[x][y]<<'\n';
    }
}

int main() {
    init();
    solve();
    return 0;
}
