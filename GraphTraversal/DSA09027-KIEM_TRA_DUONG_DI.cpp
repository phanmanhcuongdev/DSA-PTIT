#include<iostream>
#include<vector>

using namespace std;

class DSU{
	private:
		vector<int> parent,rank;
	public:
		DSU(int n){
			parent.resize(n+1);
			rank.resize(n+1,0);
			for(int i=1;i<=n;i++) parent[i]=i;
		}
		int find(int x){
			if(x!=parent[x]) parent[x]=find(parent[x]);
			return parent[x];
		}
		void unite(int u,int v){
			int pu=find(u);
			int pv=find(v);
			if(pu==pv) return;
			if(rank[pu]<rank[pv]) swap(pu,pv);
			parent[pv]=pu;
			if(rank[pv]==rank[pu]) rank[pu]++;
		}
};

void solve()
{
	int n,k;
	cin>>n>>k;
	DSU g(n);
	for(int i=0;i<k;i++){
		int u, v;
		cin>>u>>v;
		g.unite(u,v);
	}
	int r;cin>>r;while(r--)
	{
		int u,v;cin>>u>>v;
		if(g.find(u)==g.find(v)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
