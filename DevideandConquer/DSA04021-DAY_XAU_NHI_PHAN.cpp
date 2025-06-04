#include<iostream>
#include<vector>

using namespace std;

vector<long long> X(101);

long long load(long long n,long long k) {
    if (n==1) return 0;
    if (n==2) return 1;
    if (k<=X[n-2]) return load(n-2,k);
    return load(n-1,k-X[n-2]);
}

int main() {
    X[1]=X[2]=1;
    for (long long i=3;i<=100;++i) X[i]=X[i-1]+X[i-2];
    long long t;cin>>t;
    while (t--) {
        long long n,k;
        cin>>n>>k;
        cout<<load(n,k)<<endl;
    }
}
