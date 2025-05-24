#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void dfs(int start,const vector<int> Input[1001],vector<bool>& visited)
{
	visited[start]=true;
	for(auto x:Input[start])
	{
		if(!visited[x])
		{
			dfs(x,Input,visited);
		}
	}
}

int tinh_so_thanh_phan_lien_thong(const vector<int> Input[1001],int n)
{
	int res=0;
	vector<bool> visited(n+1,false);
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			dfs(i,Input,visited);
			res++;
		}
	}
	return res;
}

int main()
{
	int t;cin>>t;while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<pair<int,int>> edges;
		for(int i=0;i<k;i++)
		{
			int temp,temp1;
			cin>>temp>>temp1;
			edges.push_back({temp,temp1});			
		}
		vector<string> res;
		for(int index=0;index<k;index++)
		{
			vector<int> Input[1001];
			for(int index1=0;index1<k;++index1)
			{
				if(index1==index) continue;
				Input[edges[index1].first].push_back(edges[index1].second);
				Input[edges[index1].second].push_back(edges[index1].first);
			}
			if(tinh_so_thanh_phan_lien_thong(Input,n)>1) res.push_back(to_string(edges[index].first)+" "+to_string(edges[index].second));
		}
		for(auto x:res)
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
