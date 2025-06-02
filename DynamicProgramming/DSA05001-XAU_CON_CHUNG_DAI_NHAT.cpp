#include <iostream>
#include<cstring>
#include<vector>

using namespace std;

int xaucondainhat(const string& s1,const string& s2) {
    int n=s1.length();
    int m=s2.length();
    vector<vector<int>> dp(n+1,vector<int> (m+1,0));
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (s1[i-1]==s2[j-1]) {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main() {
    int t;cin>>t;
    while (t--) {
        string s1;string s2;
        cin>>s1>>s2;
        cout<<xaucondainhat(s1,s2)<<endl;
    }
    return 0;
}
