#include <iostream>

using namespace std;

const int MOD=1e9+7;
const int MAX_N=1000;

int C[MAX_N+1][MAX_N+1];

void precompute() {
    for (int n=0;n<=MAX_N;++n) {
        C[n][0]=1;
        for (int k=1;k<=n;++k) {
            C[n][k]=(C[n-1][k]+C[n-1][k-1])%MOD;
        }
    }
}

int main() {
    precompute();
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        cout<<C[n][k]<<endl;
    }
}
