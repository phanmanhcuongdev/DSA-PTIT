#include<iostream>
#include<vector>
#include<set>
using namespace std;
int sequenceSearch(int x, vector<int> a, int n) {
	for (int i = 0; i < n; i++) {
		if (x == a[i]) return 1;
	}
	return -1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,x;
		cin >> n>>x;
		vector<int> N(n);
		for (int i = 0; i < n; i++) {
			cin >> N[i];
		}
		cout << sequenceSearch(x, N, n);
		cout << endl;
	}
}
