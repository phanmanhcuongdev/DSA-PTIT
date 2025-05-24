#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,m;
		cin >> n>>m;
		vector<int> N(n);
		int max;
		for (int i = 0; i < n; i++) {
			cin >> N[i];
			if (i == 0) {
				max = N[i];
			}
			else {
				if (N[i] > max) max = N[i];
			}
		}
		vector<int> M(m);
		int min;
		for (int i = 0; i < m; i++) {
			cin >> M[i];
			if (i == 0) {
				min = M[i];
			}
			else {
				if (M[i] < min) min = M[i];
			}
		}		
		cout <<(long long) max * min;
		cout << endl;
	}
}
