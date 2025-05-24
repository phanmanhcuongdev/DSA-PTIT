#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void radixsort(vector<int>& n) {
	int max=n[0];
	int s = n.size();
	vector<int> V(s);
	for (int i = 1; i < s; i++) {
		if (n[i] > max) max = n[i];
	}
	int exp = 1;
	while (max / exp > 0) {
		int bucket[10] = { 0 };
		for (int i = 0; i < s; i++) {
			bucket[(n[i] / exp) % 10]++;
		}
		for (int i = 1; i < 10; i++) {
			bucket[i] += bucket[i - 1];
		}
		for (int i = s-1; i>=0 ; i--) {
			V[--bucket[(n[i] / exp) % 10]] = n[i];
		}
		for (int i = 0; i < s; i++) {
			n[i] = V[i];
		}
		exp *= 10;
	}
}
int intPow(int base, int exp) {
	int result = 1;
	while (exp--) {
		result *= base;
	}
	return result;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,x ;
		cin >> n>>x;
		vector<int> V(n);
		for (int i = 0; i < n; i++) {
			cin >> V[i];
		}
		radixsort(V);
		for (int i = n - 1; i >= n - x; i--) {
			cout << V[i] << " ";
		}
		cout << endl;
	}
}
