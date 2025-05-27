#include <iostream>
#include <queue>
#include <unordered_set>
	
using namespace std;
	
void solve() {
	int n;
	cin >> n;
	
	queue<pair<string, int>> q;
	q.push({"1", 1 % n});
	unordered_set<int> visited;
	visited.insert(1%n);
	
	while(true)
	{
	    auto [i,rem]=q.front();q.pop();
	    
	    if(rem==0){
	    	cout<<i<<endl;
	    	break;
		}
		
		int rem1=(rem*10)%n;
		if(!visited.count(rem1))
		{
			q.push({i+"0",rem1});
		}
		
		int rem2=(rem*10+1)%n;
		if(!visited.count(rem1))
		{
			q.push({i+"1",rem2});
		}
		
	}
}
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
