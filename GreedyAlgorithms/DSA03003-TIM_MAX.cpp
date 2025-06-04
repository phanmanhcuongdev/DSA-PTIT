#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MOD = 1e9 + 7;

long long calcSum(const vector<long long>& A) {
    long long result = 0;
    for (int i = 0; i < A.size(); ++i) {
        result = (result + A[i] % MOD * i % MOD) % MOD;
    }
    return result;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> A(n);
        for (auto& x : A) cin >> x;
        sort(A.begin(), A.end());
        cout << calcSum(A) << '\n';
    }
    return 0;
}
