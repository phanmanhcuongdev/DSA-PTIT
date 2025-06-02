#include<iostream>
#include<algorithm>
#include<vector>
#include<bitset>
#include<cstring>


using namespace std;

int n,t;
int a[20][20];
int dp[20][1<<20];

int usedp(int hang,int th) {
    if (hang==n) return 0;
    if (dp[hang][th]!=-1) return dp[hang][th];
    int res=0;
    for (int cot=0;cot<n;cot++) {
        if (!(th&(1<<cot))) {
            res=max(res,a[hang][cot]+usedp(hang+1,th|(1<<cot)));
        }
    }
    return dp[hang][th]=res;
}

void solve() {
    cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    cout<<usedp(0,0)<<endl;
}

int main() {
    cin>>t;while (t--) solve();
    return 0;
}
