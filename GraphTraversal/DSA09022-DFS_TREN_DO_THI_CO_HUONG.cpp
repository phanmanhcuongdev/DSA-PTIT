#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class DiGraph{
	private:
		int n;
		vector<vector<int>> danhsachke;
		vector<int> result;
		vector<bool> visited;
	public:
		DiGraph(vector<pair<int,int>> danhsachcanh,int n)
		{
			this->n=n;
			danhsachke.resize(n+1);
			visited.resize(n+1,false);
			for(auto& temp:danhsachcanh)
			{
				danhsachke[temp.first].push_back(temp.second);
			}
		}
		void dfs(int start)
		{
			result.push_back(start);
			visited[start]=true;
			for(auto x:danhsachke[start])
			{
				if(!visited[x])
				{
					dfs(x);
				}
			}
		}
		void display()
		{
			for(auto x:result)
			{
				cout<<x<<" ";
			}
			cout<<endl;
		}
};

int main()
{
	int t;cin>>t;while(t--)
	{
		int n,k,start;
		cin>>n>>k>>start;
		vector<pair<int,int>> danhsachcanh;
		for(int i=0;i<k;i++)
		{
			int a,b;cin>>a>>b;
			danhsachcanh.push_back({a,b});
		}
		DiGraph run(danhsachcanh,n);
		run.dfs(start);
		run.display();
	}
}
