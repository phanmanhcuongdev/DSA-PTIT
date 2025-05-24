#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> bfs(vector<int> input[1001],int n,int start)
{
	vector<int> res;
	vector<bool> visited(n,false);
	queue<int> temp;
	temp.push(start);
	visited[start]=true;
	while(!temp.empty())
	{
		int x=temp.front();
		temp.pop();
		res.push_back(x);
		for(auto y:input[x])
		{
			if(!visited[y])
			{
				visited[y]=true;
				temp.push(y);
			}
		}
	}
	return res;
}

int main()
{
	int t;cin>>t;while(t--)
	{
		int n,k,start;
		cin>>n>>k>>start;
		vector<int> Input[1001];
		for(int index=0;index<k;index++)
		{
			int a,b;cin>>a>>b;
			Input[a].push_back(b);
			Input[b].push_back(a);
		}
		vector<int> res=bfs(Input,n,start);
		for(auto x:res) cout<<x<<" ";
		cout<<endl;
	}
}
