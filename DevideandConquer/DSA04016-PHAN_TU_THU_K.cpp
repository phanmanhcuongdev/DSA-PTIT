#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
//cách dùng multiset
int main() {
    int t;
    cin>>t;
    while (t--) {
        int m,n,k;
        cin>>m>>n>>k;
        multiset<int> M;
        for (int i=0;i<m+n;i++) {
            int x;
            cin>>x;
            M.insert(x);
        }
        int index=0;
        for (int m:M) {
            index++;
            if (index==k) {
                cout<<m<<endl;
                break;
            }
        }
    }
    return 0;
}
/*
Cách dùng Devide and conquer
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int findKthElement(vector<int> &A,vector<int> &B,int k) {
    int n=A.size(),m=B.size();
    int i=0,j=0;
    while (true) {
        if (i==n) return B[j+k-1];
        if (j==m) return A[i+k-1];
        if (k==1) return min(A[i],B[j]);
        int midA=min(k/2,n-i);
        int midB=min(k/2,m-j);
        if (A[i+midA-1]<B[j+midB-1]) {
            i+=midA;
            k-=midA;
        }else {
            j+=midB;
            k-=midB;
        }
    }
}

void solve() {
    int m,n,k;
    cin>>m>>n>>k;
    vector<int> A(m),B(n);
    for (int i = 0; i < m; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    cout << findKthElement(A, B, k) << endl;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
*/
