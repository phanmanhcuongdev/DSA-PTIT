#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	short t;
	cin >> t;
	while (t--) {
		int n,x;
		cin >> n>>x;
		set<int> X;
		set<int> Y;
		set<int> Z;
		for (int i = 0; i < n; i++) {
			int y;
			cin >> y;
			X.insert(y);
			Z.insert(y);
		}
		for (int i = 0; i < x; i++) {
			int z;
			cin >> z;
			Y.insert(z);
			Z.insert(z);
		}
		for (int m : Z) {
			cout << m << " ";
		}
		cout << endl;
		for (int n : X) {
			if (Y.count(n) == 1) {
				cout << n << " ";
			}
		}

		cout << endl;
	}
}
