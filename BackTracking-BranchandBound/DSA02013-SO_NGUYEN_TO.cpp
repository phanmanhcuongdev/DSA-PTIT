#include<iostream>
#include<vector>
#include<string>
#include<algorithm>>

using namespace std;

#define t() int t;cin>>t;while(t--)
#define FOR(i,x,y) for(int i=x;i<y;i++)
#define nhap(x) int x;cin>>x;
#define pb push_back

bool snt(int n){
    if(n<=1) cout<<false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

vector<string> result;
void Tongsonguyento(int n,int p,int s,string res){
    if(s==0&&n==0){
        result.pb(res);
    }
    if(s<=0) return;
    if(n<=0) return;
    FOR(i,p+1,s+1){
        if(snt(i)){
            Tongsonguyento(n-1,i,s-i,res+to_string(i)+" ");
        }
    }
}

int main(){
    t(){
        nhap(n);nhap(p);nhap(s);
        Tongsonguyento(n,p,s,"");
        cout<<result.size()<<endl;
        for(auto x:result){
            cout<<x<<endl;
        }
        result.clear();
    }
}
