#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
using namespace std;
int n;
int k;
int A[100];
vector<string> B;
void sinhtohop(int i,int start){
    if(i==k){
        for(int i=0;i<k;i++){
            cout<<B[A[i]]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int j=start;j<=n-k+i;j++){
        A[i]=j;
        sinhtohop(i+1,j+1);
    }
}
int main(){
    cin>>n>>k;
    set<string> tam;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        tam.insert(x);
    }
    n=tam.size();
    for(auto a:tam){
        B.push_back(a);
    }
    sinhtohop(0,0);
}
