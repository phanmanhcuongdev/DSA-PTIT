#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>

using namespace std;

int n,m;
vector<tuple<int,int,int>> edges;
vector<int> parent;
int weigh;

int find(int u) {
    if (parent[u]!=u) {
        parent[u]= find(parent[u]);
    }
    return parent[u];
}

bool unite(int u,int v) {
    int pv=find(v);
    int pu=find(u);
    if (pu==pv) return false;
    parent[pu]=pv;
    return true;
}

void kruskal() {
    int cnt=0;
    for (auto [w,u,v]:edges) {
        if (unite(u,v)) {
            weigh+=w;
            cnt++;
            if (cnt==n-1) {
                break;
            }
        }
    }
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        edges.clear();
        weigh=0;
        cin>>n>>m;
        parent.resize(n+1);
        for (int i=1;i<=n;i++) parent[i]=i;
        int x,y,w;
        for (int i=1;i<=m;i++) {
            cin>>x>>y>>w;
            edges.push_back({w,x,y});
        }
        sort(edges.begin(),edges.end());
        kruskal();
        cout<<weigh<<'\n';
    }
}
