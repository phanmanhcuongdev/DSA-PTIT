#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int load(int k,int n) {
    if (k%2==1) return n;
    else return load(k/2,n+1);
}

int main() {
    int t;cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        cout<<char('A'+load(k,0))<<endl;
    }
}
