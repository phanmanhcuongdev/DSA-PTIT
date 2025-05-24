#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void merge(vector<int>& n, int l,int m, int r) {
	int n1 = m - l + 1;
	int n2 = r - m;
	vector<int> L(n1);
	for (int i = 0; i < n1; i++) {
		L[i] = n[i + l];
	}
	vector<int> R(n2);
	for (int i = 0; i < n2; i++) {
		R[i] = n[i + m+1];
	}
	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			n[k] = L[i];
			i++;
		}
		else {
			n[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		n[k] = L[i];
		i++; k++;
	}
	while (j < n2) {
		n[k] = R[j];
		j++; k++;
	}
}
void mergesort(vector<int>& n, int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		mergesort(n, l, m);
		mergesort(n, m + 1, r);
		merge(n, l, m, r);
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
		mergesort(N, 0, n - 1);
		for (int i = 0; i < n; i++) {
			cout<< N[i]<<" ";
		}
		cout << endl;
	}
}
