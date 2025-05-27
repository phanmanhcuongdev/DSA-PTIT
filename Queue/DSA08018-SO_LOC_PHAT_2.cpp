#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void solve()
{
	int n;cin>>n;
	queue<string> q;
	q.push("6");q.push("8");
	vector<string> result;
	int len=0;
	while(len<=n)
	{
		string current=q.front();q.pop();
		result.push_back(current);
		len=q.front().length();
		q.push(current+"6");q.push(current+"8");
	}
	cout<<result.size()<<endl;
	for(string x:result) cout<<x<<" ";
	cout<<endl;
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
