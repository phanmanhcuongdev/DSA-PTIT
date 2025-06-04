#include <iostream>
#include<vector>

using namespace std;

const int MOD=1e9+7;
/*
  |f(n) |   =   |1 1|^(n-1)  *   |1|
  |f(n-1|       |1 0|            |0|  
*/
void matMul(long long A[2][2],long long B[2][2]) {
    long long result[2][2];
    result[0][0]=(A[0][0]*B[0][0]+A[0][1]*B[1][0])%MOD;
    result[0][1]=(A[0][0]*B[0][1]+A[0][1]*B[1][1])%MOD;
    result[1][0]=(A[1][0]*B[0][0]+A[1][1]*B[1][0])%MOD;
    result[1][1]=(A[1][0]*B[0][1]+A[1][1]*B[1][1])%MOD;
    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
            A[i][j]=result[i][j];
}

void matPow(long long m[2][2],int n) {
    if (n==1||n==0) return;
    long long base[2][2]={{1,1},{1,0}};
    matPow(m,n/2);
    matMul(m,m);
    if (n%2==1) {
        matMul(m,base);
    }
}

long long fib(long long n) {
    if (n==0) return 0;
    long long m[2][2]={{1,1},{1,0}};
    matPow(m,n-1);
    return m[0][0];
}

void solve() {
    long long n;
    cin>>n;
    cout<<fib(n)<<"\n";
}

int main() {
    int t;cin>>t;
    while (t--) solve();
    return 0;
}
