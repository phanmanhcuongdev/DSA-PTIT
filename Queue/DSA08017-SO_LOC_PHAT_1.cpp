#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<string> result;
	queue<string> q;
	q.push("6");q.push("8");
	int l=0;
	while(l<=n)
	{
		string current=q.front();q.pop();
		result.push_back(current);
		l=q.front().length();
		q.push(current+"6");
		q.push(current+"8");
	}
	for(int i=result.size()-1;i>=0;i--) cout<<result[i]<<" ";
	cout<<endl;
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
