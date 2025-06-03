#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

void solve() {
    int c,n;
    cin>>c>>n;
    vector<int> w(n);
    for (int i=0;i<n;i++) cin>>w[i];
    vector<bool> dp(c+1,false);
    dp[0]=true;
    for (int i=0;i<n;i++) {
        for (int j=c;j>=w[i];--j) {
            if (dp[j-w[i]]) dp[j]=true;
        }
    }
    for (int j=c;j>=0;j--) {
        if (dp[j]) {
            cout<<j<<endl;
            return;
        }
    }
}

int main() {
    solve();
    return 0;
}
