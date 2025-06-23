#include <iostream>
#include <vector>

using namespace std;

int find(int u,vector<int> &parent) {
    if (parent[u]!=u) parent[u]= find(parent[u],parent);
    return parent[u];
}

bool DisjointSetUnion(int u,int v,vector<int> &parent) {
    int pu=find(u,parent);
    int pv=find(v,parent);
    if (pu==pv) return false;
    parent[pu]=pv;
    return true;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        bool hasCycle=false;
        vector<int> parent(n+1);
        for (int i=1;i<=n;i++) parent[i]=i;
        for (int i=1;i<=m;i++) {
            int u,v;
            cin>>u>>v;
            if (!DisjointSetUnion(u,v,parent)) {
                hasCycle=true;
            }
        }
        cout<<(hasCycle?"YES\n":"NO\n");
    }
}
