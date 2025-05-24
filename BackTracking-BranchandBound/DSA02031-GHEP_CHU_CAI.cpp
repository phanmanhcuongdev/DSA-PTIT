#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

#define ll long long

bool check[256];

bool ktra(string &s){
    for(int i=2;i<s.size();i++){
        if(!check[s[i-2]]&&check[s[i-1]]&&!check[s[i]])
        return false;
    }
    return 1;
}

int main(){
    check['A']=check['E']=1;
    char c;cin>>c;
    string s="";
    for(char i='A';i<=c;++i){
        s+=i;
    }
    do
    {
        if(ktra(s)) cout<<s<<'\n';
    }
    while(next_permutation(s.begin(),s.end()));
}

