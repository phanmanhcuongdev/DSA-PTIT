#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool snt(int a) {
	for (int i = 2; i <=sqrt(a); i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
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
		int n;
		cin >> n;
		bool result = false;
		int i = 2;
		for (; i <= n / 2; i++) {
			if (snt(i) && snt(n - i)) {
				result = true;
				break;
			}
		}
		if (result == false) {
			cout << -1;
		}
		else {
			cout << i<<" " << n - i;
		}
		cout << endl;
	}
}
