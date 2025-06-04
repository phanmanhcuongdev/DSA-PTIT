#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

using MaTrix=vector<vector<long long>>;
const int MOD=1e9+7;

MaTrix multiply(MaTrix a,MaTrix b,int n) {
    MaTrix res(n,vector<long long> (n,0));
    for (int i=0;i<n;i++) {
        for (int k=0;k<n;k++) {
            for (int j=0;j<n;j++) {
                res[i][j]=(res[i][j]+a[i][k]*b[k][j])%MOD;
            }
        }
    }
    return res;
}

MaTrix power(MaTrix a,long long k,int n) {
    MaTrix res(n,vector<long long> (n,0));
    for (int i=0;i<n;i++) res[i][i]=1;
  //luy thua nhi phan
    while (k>0) {
        if (k%2==1) res=multiply(res,a,n);
         a=multiply(a,a,n);
        k/=2;
    }
    return res;
}

void solve() {
    int n;long long p;
    cin>>n>>p;
    MaTrix a(n,vector<long long> (n));
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    MaTrix result=power(a,p,n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum = (sum + result[i][n - 1]) % MOD;

    cout << sum << endl;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
