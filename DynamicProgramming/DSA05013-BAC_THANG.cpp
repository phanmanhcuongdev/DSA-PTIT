#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MOD = 1e9+7;

int solve(int n,int k) {
    vector<int> dp(n+1,0);
    dp[0]=1;
    int window_sum=dp[0];
    for (int i=1;i<=n;i++) {
        dp[i]=window_sum;
        if (i<k) {
            window_sum=(window_sum+dp[i])%MOD;
        }else {
            window_sum=((window_sum+dp[i])%MOD-dp[i-k]+MOD)%MOD;
        }
    }
    return dp[n];
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k;cin>>n>>k;
        cout<<solve(n,k)<<"\n";
    }
    return 0;
}
