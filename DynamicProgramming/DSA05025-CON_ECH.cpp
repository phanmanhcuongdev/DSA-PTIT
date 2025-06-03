#include <iostream>
#include <vector>

using namespace std;

long long solve(int n) {
    vector<long long> dp(n + 1, 0);
    dp[0]=1;

    for (int i = 1; i <= n; i++) {
        if(i==1) 
        {
            dp[i]=dp[0];
            continue;
        }
        if(i==2) 
        {
            dp[i]=dp[0]+dp[1];
            continue;
        }
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    return dp[n];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}
