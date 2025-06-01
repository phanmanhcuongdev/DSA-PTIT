#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(int t) {
    string s;
    cin>>s;
    cout<<t<<" ";
    if (next_permutation(s.begin(),s.end())) {
        cout<<s<<endl;
    }else {
        cout<<"BIGGEST"<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    for (int i=1;i<=t;i++) {
        int j;
        cin>>j;
        solve(j);
    }
    return 0;
}
