#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

int n,m;
int ke[1001][1001];
bool visited[1001];
vector<int> result;
int TPLT=0;

void dfs(int u,int emit) {
    visited[u]=true;
    for (int i=1;i<=n;i++) {
        if (!visited[i]&&ke[u][i]&&i!=emit) {
            dfs(i,emit);
        }
    }
}

void solve() {
    cin>>n>>m;
    result.clear();
    TPLT=0;
    memset(visited,0,sizeof(visited));
    memset(ke,0,sizeof(ke));
    for (int i=1;i<=m;i++) {
        int u,v;
        cin>>u>>v;
        ke[u][v]=ke[v][u]=1;
    }
    for (int i=1;i<=n;i++) {
        if (!visited[i]) {
            dfs(i,-1);
            TPLT++;
        }
    }
    for (int i=1;i<=n;i++) {
        memset(visited,0,sizeof(visited));
        int tplt=0;
        for (int j=1;j<=n;j++) {
            if (!visited[j]&&j!=i) {
                dfs(j,i);
                tplt++;
            }
        }
        if (tplt>TPLT) result.push_back(i);
    }
    for (int u:result) cout<<u<<' ';
    cout<<'\n';
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}
