  #include<iostream>
#include<vector>

using namespace std;

class Degree{
	private:
		int n;
		vector<int> deg;
	public:
		Degree(int n):n(n){
			deg.resize(n+1,0);
		}
		void update(int u,int v){
			deg[u]++;deg[v]++;
		}
		void check(){
			int odd=0;
			for(int i=1;i<=n;i++)
			{
				if(deg[i]%2==1) odd++;
			}
			if(odd==0) cout<<2<<endl;
			if(odd==2) cout<<1<<endl;
			if(odd!=0&&odd!=2) cout<<0<<endl;
		}
};

void solve()
{
	int n,k;cin>>n>>k;Degree g(n);
	for(int i=0;i<k;i++)
	{
		int u,v;cin>>u>>v;
		g.update(u,v);
	}
	g.check();
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
