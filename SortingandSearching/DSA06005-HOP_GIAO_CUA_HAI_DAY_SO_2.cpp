#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void radixsort(vector<short>& n) {
	short max=n[0];
	short s = n.size();
	vector<short> V(s);
	for (short i = 1; i < s; i++) {
		if (n[i] > max) max = n[i];
	}
	short exp = 1;
	while (max / exp > 0) {
		short bucket[10] = { 0 };
		for (short i = 0; i < s; i++) {
			bucket[(n[i] / exp) % 10]++;
		}
		for (short i = 1; i < 10; i++) {
			bucket[i] += bucket[i - 1];
		}
		for (short i = s-1; i>=0 ; i--) {
			V[--bucket[(n[i] / exp) % 10]] = n[i];
		}
		for (short i = 0; i < s; i++) {
			n[i] = V[i];
		}
		exp *= 10;
	}
}
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
