#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long fb[100];

char load(long long n,long long k) {
    if (n==1) return 'A';
    if (n==2) return 'B';
    if (k<=fb[n-2]) return load(n-2,k);
    else return load(n-1,k-fb[n-2]);
}

void solve() {
    long long n,k;
    cin>>n>>k;
    cout<<load(n,k)<<"\n";
}

int main() {
    int t;
    cin>>t;
    fb[1]=fb[2]=1;
    for (int i=3;i<=100;i++) fb[i]=fb[i-1]+fb[i-2];
    while (t--) solve();
    return 0;
}
