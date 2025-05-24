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
void selectionsort(vector<int>& N) {
	for (int i = 0; i < N.size() - 1; i++) {
		int min = i;
		for (int j = i + 1; j < N.size(); j++) {
			if (N[j] < N[min]) min = j;
		}
		swap(N[min], N[i]);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		bool B[10] = { false };
		vector<int> C;
		vector<long long> N(n);
		for (int i = 0; i < n; i++) {
			cin >> N[i];
			them(C, N[i], B);
		}
		selectionsort(C);
		for (int i = 0; i < C.size(); i++) {
			cout << C[i] << " ";
		}
		cout << endl;
	}
}
