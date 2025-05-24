#include<iostream>
#include<vector>
#include<set>
using namespace std;
void them(vector<int>& N, long long g,bool B[]) {
	while (g > 0) {
		if (B[g % 10] == false) {
			N.push_back(g % 10);
			B[g % 10] = true;
		}
		g /= 10;
	}
}
void selectionsort(vector<short>& N) {
	for (int i = 0; i < N.size() - 1; i++) {
		int min = i;
		for (int j = i + 1; j < N.size(); j++) {
			if (N[j] < N[min]) min = j;
		}
		swap(N[min], N[i]);
	}
}

int main() {
	short t;
	cin >> t;
	while (t--) {
		short n;
		cin >> n;
		vector<short> V(n);
		for (short i = 0; i < n; i++) {
			cin >> V[i];
		}
		vector<short> X = V;
		short l = 0, k = 0, r = n - 1;
		selectionsort(X);
		while (l < r) {
			V[k] = X[r];
			k++; r--;
			V[k] = X[l];
			k++; l++;
		}
		if (X.size() % 2 == 1) {
			V[k] = X[r];
		}
		for (short i = 0; i < n; i++) {
			cout << V[i];
			if (i != X.size() - 1) cout << " ";
		}
		cout << endl;
	}
}
