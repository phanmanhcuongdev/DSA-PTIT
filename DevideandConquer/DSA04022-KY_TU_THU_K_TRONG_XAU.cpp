#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int load(int k,int n) {
    if (k%2==1) return n;
    else return load(k/2,n+1);
}
char load(int n,int k) {
    while (true) {
        int m=(1<<(n-1));
        if (k==m) return 'A'+n-1;
        if (k<m) {
            n--;
        }else {
            n--;
            k-=m;
        }
    }
}

int main() {
    int t;cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        cout<<char('A'+load(k,0))<<endl;
        cout<<load(n,k)<<endl;
    }
}
