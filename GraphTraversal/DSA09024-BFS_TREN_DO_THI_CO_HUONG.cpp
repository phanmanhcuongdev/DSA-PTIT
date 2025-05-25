#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

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
		void bfs(int start)
		{
			visited[start]=true;
			queue<int> temp;
			temp.push(start);
			while(!temp.empty())
			{
				int a=temp.front();temp.pop();
				result.push_back(a);
				for(auto x:danhsachke[a])
				{
					if(!visited[x])
					{
						visited[x]=true;
						temp.push(x);
					}
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
		run.bfs(start);
		run.display();
	}
}
