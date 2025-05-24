#include<iostream>
#include<vector>
#include<set>
using namespace std;
void radixsort(vector<short>& n) {
	short max = n[0];;
	short s = n.size();
	for (short i = 1; i < s; i++) {
		if (n[i] > max) max = n[i];
	}
	short exp = 1;
	vector<short> B(s);
	while (max / exp > 0) {
		short bucket[10] = { 0 };
		for (short i = 0; i < s; i++) {
			bucket[(n[i] / exp) % 10]++;
		}
		for (short i = 1; i < 10; i++) {
			bucket[i] += bucket[i - 1];
		}
		for (short i = s - 1; i >= 0; i--) {
			B[--bucket[(n[i] / exp) % 10]] = n[i];
		}
		for (short i = 0; i < s; i++) {
			n[i] = B[i];
		}
		exp *= 10;
	}
}
int main() {
	short t; cin >> t;
	while (t--) {
		short n; cin >> n;
		vector<short> N(n);
		set<short> B;
		for (short i = 0; i < n; i++) {
			cin >> N[i];
			B.insert(N[i]);
		}
		radixsort(N);
		short e = N[n - 1] - N[0] + 1-B.size();
		cout<<e<< endl;
	}
}
