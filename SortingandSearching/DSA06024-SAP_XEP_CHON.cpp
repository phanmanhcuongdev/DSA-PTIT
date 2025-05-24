#include<iostream>
#include<vector>
#include<set>
using namespace std;
void in(vector<int> N) {
	for (int i = 0; i < N.size(); i++) {
		cout << N[i];
		if (i != N.size() - 1) cout << " ";
	}
	cout << endl;
}
int main() {
		int n;
		cin >> n;
		vector<int> N(n);
		for (int i = 0; i < n; i++) {
			cin >> N[i];
		}
		for (int i = 0; i < n - 1; i++) {
			int min = i;
			for (int j = i + 1; j < n; j++) {
				if (N[min] > N[j]) min = j;
			}
			int temp = N[min]; N[min] = N[i]; N[i] = temp;
			cout << "Buoc " << i + 1 << ": ";
			in(N);
		}
}
