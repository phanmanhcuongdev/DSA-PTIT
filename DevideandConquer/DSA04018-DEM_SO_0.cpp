#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        bool k=true;
        for(int i=0;i<n;i++) cin>>A[i];
        for(int i=0;i<n;i++){
            if(A[i]==1){
                cout<<i<<endl;
                k=false;
                break;
            }
        }
        if(k==true) cout<<0<<endl;
    }
    
}
