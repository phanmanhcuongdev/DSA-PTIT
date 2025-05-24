#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void radixsort(vector<int>& n) {
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
		int n ;
		cin >> n;
		vector<int> V(n);
		for (int i = 0; i < n; i++) {
			cin >> V[i];
		}
		vector<int> X = V;
		radixsort(V);
		int l , r ;
		for (int i = 0; i < n; i++) {
			if (V[i] != X[i]) {
				l = i + 1;
				break;
			}
		}
		for (int i = n-1; i>=0; i--) {
			if (V[i] != X[i]) {
				r = i + 1;
				break;
			}
		}
		cout << l << " " << r;
		cout << endl;
	}
}
