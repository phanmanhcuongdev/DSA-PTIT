#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>

using namespace std;


int lon(string a){
    int t=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='5') a[i]='6';
        t=(t*10+(a[i]-'0'));
    }
    return t;
}
int be(string a){
    int t=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='6') a[i]='5';
        t=(t*10+(a[i]-'0'));
    }
    return t;
}

int main(){
        string a,b;
        cin>>a>>b;
        cout<<be(a)+be(b)<<' '<<lon(a)+lon(b)<<endl;
    
}
