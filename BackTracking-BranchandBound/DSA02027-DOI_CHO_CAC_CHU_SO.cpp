#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ts() int t;cin>>t;while(t--)
#define ll long long
#define pb push_back
#define all(x) x.begin(),x.end()

void doichocacchuso(string s,int k){
    int n=s.length();
    for(int i=0;i<n-1&&k>0;i++){
        int pos=i;
        for(int j=n-1;j>i;j--){
            if(s[pos]<s[j]){
                pos=j;
            }
        }
        if(pos!=i){
            swap(s[pos],s[i]);
            k--;
        }
    }
    cout<<s<<endl;
}

int main(){
    ts(){
        int k;
        cin>>k;
        string s;
        cin>>s;
        doichocacchuso(s,k);
    }
}
