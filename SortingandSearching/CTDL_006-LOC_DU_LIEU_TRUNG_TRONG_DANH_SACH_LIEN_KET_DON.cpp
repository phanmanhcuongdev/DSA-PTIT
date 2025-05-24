#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> Y;
	set<int> X;
	vector<int> Z;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		Y.push_back(x);
		X.insert(x);
	}
	for (int i = 0; i < n; i++) {
		if (X.count(Y[i]) == 1) {
			Z.push_back(Y[i]);
			X.erase(Y[i]);
		}
	}
	for (int i = 0; i < Z.size(); i++) {
		cout << Z[i] << " ";
	}
}
