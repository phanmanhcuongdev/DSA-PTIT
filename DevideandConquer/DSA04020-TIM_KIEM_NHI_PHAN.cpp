#include<iostream>
#include<vector>

using namespace std;

int binarysearch(const vector<int>& A,int x,int l,int r) {
    while (l<=r) {
        int m=(l+r)/2;
        if (A[m]==x) return m;
        else {
            if (A[m]>x) {
                r=m-1;
            }else {
                l=m+1;
            }
        }
    }
    return -1;
}

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int> input(n);
    for (int i=0;i<n;i++) cin>>input[i];
    int result=binarysearch(input,x,0,n-1);
    if (result==-1) cout<<"NO\n";
    else cout<<result+1<<"\n";
}

int main() {
    int t;cin>>t;while (t--) solve();
    return 0;
}
