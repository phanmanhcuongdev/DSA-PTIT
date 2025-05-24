#include<iostream>
#include<vector>
using namespace std;
int main() {
	int x;
	cin >> x;
	vector<int> v;
	for (int i = 1;i <= x;i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	int j;
	cin >> j;
	for (int i = 1;i <= x;i++) {
		if (v[i - 1] != j) {
			cout << v[i - 1] << " ";
		}
	}
}
