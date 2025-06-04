#include <iostream>
#include <vector>

using namespace std;

int find(const vector<int>& A,int l,int r) {
    if (l>=r) return l;
    int m=(l+r)/2;
    if (A[m]==1) return find(A,l,m);
    else return find(A,m+1,r);
    return -1;
}

void solve() {
    int n;
    cin>>n;
    vector<int> ex(n);
    for (int i=0;i<n;i++) cin>>ex[i];
    ex.push_back(1);
    cout<<find(ex,0,n)<<endl;
}

int main() {
    int t;cin>>t;while(t--) solve();
    return 0;
}
