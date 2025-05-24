#include<iostream>
#include<vector>
#include<set>
using namespace std;
void radixsort(vector<int>& n) {
	int max = n[0];
	int s = n.size();
	for (int i = 1; i < s; i++) {
		if (max < n[i]) max = n[i];
	}
	int exp = 1;
	while (max / exp > 0) {
		vector<int> N(s);
		int bucket[10] = { 0 };
		for (int i = 0; i < s; i++) {
			bucket[n[i] / exp % 10]++;
		}
		for (int i = 1; i < 10; i++) {
			bucket[i] += bucket[i - 1];
		}
		for (int i = s - 1; i >= 0; i--) {
			N[--bucket[n[i] / exp % 10]] = n[i];
		}
		for (int i = 0; i < s; i++) {
			n[i] = N[i];
		}
		exp *= 10;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> N(n);
		for (int i = 0; i < n; i++) {
			cin >> N[i];
		}
		radixsort(N);
		if (n <= 1 || N[0] == N[1]) cout << -1;
		else cout << N[0] << " " << N[1];
		cout << endl;
	}
}
