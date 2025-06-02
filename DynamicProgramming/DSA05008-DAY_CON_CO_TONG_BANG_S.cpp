#include <iostream>
#include<vector>

using namespace std;

bool subsetSum(const vector<int>& a,int n,int s) {
    vector<vector<bool>> dp(n+1,vector<bool> (s+1,false));
    dp[0][0]=true;

    for (int i=1;i<=n;i++) {
        for (int j=0;j<=s;++j) {
            dp[i][j]=dp[i-1][j];
            if (j>=a[i-1]) {
                dp[i][j]=dp[i][j]||dp[i-1][j-a[i-1]];
            }
        }
    }
    return dp[n][s];
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        if (subsetSum(a,n,s)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
