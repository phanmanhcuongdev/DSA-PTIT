#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

void solve() {
    int n,w;
    cin>>n>>w;
    vector<int> A(n),C(n);
    for (int i=0;i<n;i++) cin>>A[i];
    for (int i=0;i<n;i++) cin>>C[i];
    vector<int> dp(w+1,0);
    for (int i=0;i<n;i++) {
        for (int j=w;j>=A[i];--j) {
            dp[j]=max(dp[j],dp[j-A[i]]+C[i]);
        }
    }
    cout<<dp[w]<<endl;
}

int main() {
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
