#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool ktra(string &s){
    for(int i=1;i<s.size();i++){
        if((int(s[i]-s[i-1]))==1||(int(s[i-1]-s[i]))==1) return false;
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s="";
        for(int i=1;i<=n;i++){
            s+=to_string(i);
        }
        do
        {
            if(ktra(s)) cout<<s<<'\n';
        }
        while(next_permutation(s.begin(),s.end()));
    }
}
