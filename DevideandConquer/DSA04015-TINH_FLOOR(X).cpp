#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int search(vector<int> &A,int l,int r,int k) {
    int res=-2;
    while (l<=r) {
        int mid=(l+r)/2;
        if (A[mid]<=k) {
            res=mid;
            l=mid+1;
        }else {
            r=mid-1;
        }
    }
    return res+1;
}

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> A(n);
    for (int i=0;i<n;i++) cin>>A[i];
    cout<<search(A,0,n-1,k)<<endl;
}

int main() {
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
