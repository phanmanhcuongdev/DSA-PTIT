#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void solve()
{
	long long s;
	cin>>s;
	long long result=0;
	queue<long long> q;
	q.push(1);
	while(true)
	{
		long long current=q.front();
		q.pop();
		if(current>=s) break;
		else result++;
		q.push(current*10);
		q.push(current*10+1);
	}
	cout<<result<<endl;
}

int main()
{
	int t;cin>>t;while(t--) solve();
  return 0;
}
