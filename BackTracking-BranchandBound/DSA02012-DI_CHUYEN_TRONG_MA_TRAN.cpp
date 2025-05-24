#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void dichuyen(int m,int n,int a,int b,int &c){
    if(a==m-1&&b==n-1){
        c++;
        return;
    }else{
        if(a<m){
            dichuyen(m,n,a+1,b,c);
        }
        if(b<n){
            dichuyen(m,n,a,b+1,c);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int A[100][100];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>A[i][j];
            }
        }
        int c=0;
        dichuyen(m,n,0,0,c);
        cout<<c<<endl;
    }
}
