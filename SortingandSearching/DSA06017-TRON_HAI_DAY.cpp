#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printArray(vector<int>& n) {
	for (int i = 0; i < n.size(); i++) {
		cout << n[i];
		if (i != n.size() - 1) cout << " ";
	}
}
int main() {
	short t; cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		vector<int> N(n);
		vector<int> X(x);
		vector<int> B(x + n);
		for (int i = 0; i < n; i++) {
			cin >> N[i];
			B[i] = N[i];
		}
		for (int i = 0; i < x; i++) {
			cin >> X[i];
			B[n + i] = X[i];
		}
		sort(B.begin(),B.end());
		printArray(B);
		cout<<endl;
	}
}
