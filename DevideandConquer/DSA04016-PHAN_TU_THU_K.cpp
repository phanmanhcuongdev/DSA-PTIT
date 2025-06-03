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
