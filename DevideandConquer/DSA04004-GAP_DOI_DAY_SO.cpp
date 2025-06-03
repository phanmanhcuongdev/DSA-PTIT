#include <iostream>
using namespace std;

long long findValue(long long k,long x) {
    if (k%2==1) return x;
    else return findValue(k/2,x+1);
}

void solve() {
    long long n,k;
    cin>>n>>k;
    cout<<findValue(k,1)<<endl;
}

int main() {
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
