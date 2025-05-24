#include<iostream>
#include<string>
#include<vector>
using namespace std;
string s;
void khoitao(int A[],int n){
    for(int i=0;i<n;i++){
        A[i]=i;
    }
}
void in_ra(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<s[A[i]];
    }
    cout<<" ";
}
void dequyhoanvi(int A[],int i,bool chuaxet[],int n){
    if(i==n){
        in_ra(A,n);
        return;
    }
    for(int j=0;j<n;j++){
        if(chuaxet[j]==true) {
            A[i]=j;
            chuaxet[j]=false;
            dequyhoanvi(A,i+1,chuaxet,n);
            chuaxet[j]=true;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
    int a=s.size();
    int A[a];
    khoitao(A,a);
    bool chuaxet[a];
    for(int i=0;i<a;i++){
        chuaxet[i]=true;
    }
    dequyhoanvi(A,0,chuaxet,a);
    cout<<endl;
    }
}
