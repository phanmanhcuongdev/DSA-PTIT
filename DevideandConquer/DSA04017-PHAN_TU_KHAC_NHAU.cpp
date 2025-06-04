#include <iostream>
#include <vector>
//#include<algorithm

using namespace std;

int findDifference(const vector<long long> &A,const vector<long long> &B,long long l,long long r) {
    if (l>=r) return l;
    long long m=(l+r)/2;
    if (A[m]==B[m]) return findDifference(A,B,m+1,r);
    else return findDifference(A,B,l,m);
    return -1;
}

void solve() {
    long long n;
    cin>>n;
    vector<long long> A(n);
    vector<long long> A1(n-1);
    for (long long i=0;i<n;i++) cin>>A[i];
    for (long long i=0;i<n-1;i++) cin>>A1[i];
    cout<<findDifference(A,A1,0,n-1)+1<<endl;;
}

int main() {
    long long t;
    cin>>t;
    while (t--) solve();
    return 0;
}
