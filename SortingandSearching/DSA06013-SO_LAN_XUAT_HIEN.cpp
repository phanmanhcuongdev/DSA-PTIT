#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,x ;
		cin >> n>>x;
		vector<int> V(n);
		int m = 0;
		for (int i = 0; i < n; i++) {
			cin >> V[i];
			if (V[i] == x) m++;
		}
		if (m == 0) cout << -1;
		else cout << m;
		cout << endl;
	}
}
