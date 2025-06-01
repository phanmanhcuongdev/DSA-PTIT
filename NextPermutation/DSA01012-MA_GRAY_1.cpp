#include<algorithm>
#include<iostream>
#include<vector>
#include<cmath>
#include<bitset>

using namespace std;

void generateGray(int n,vector<string> &graycode) {
    if (n==1) {
        graycode={"0","1"};
        return;
    }
    vector<string> prev;
    generateGray(n-1,prev);
    graycode.clear();
    for (const string& code : prev) {
        graycode.push_back("0"+code);
    }
    for (auto it=prev.rbegin();it!=prev.rend();++it) {
        graycode.push_back("1"+*it);
    }
}

void solve() {
    int n;
    cin>>n;
    vector<string> graycodes;
    generateGray(n,graycodes);
    for (string s:graycodes) cout<<s<<" ";
    cout<<"\n";
}

int main() {
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
