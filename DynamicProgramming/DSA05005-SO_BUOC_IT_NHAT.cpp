#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sobuoctoithieu(vector<int> &a, int n) {
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] >= a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int l = *max_element(dp.begin(), dp.end());
    return n - l;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("%d\n", sobuoctoithieu(a, n));
    }
    return 0;
}
