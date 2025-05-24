#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void timduongdi(int i,int j,int n,string a,vector<string> &A, vector<vector<int>> &B, vector<vector<bool>> &C){
    if(i==n-1&&j==n-1){
        A.push_back(a);
        return;
    }
    if(i<n-1&&B[i+1][j]==1&&C[i+1][j]==false){
        C[i+1][j]=true;
        timduongdi(i+1,j,n,a+"D",A,B,C);
        C[i+1][j]=false;
    }
    if(j<n-1&&B[i][j+1]==1&&C[i][j+1]==false){
        C[i][j+1]=true;
        timduongdi(i,j+1,n,a+"R",A,B,C);
        C[i][j+1]=false;
    }
    if(i>0&&B[i-1][j]==1&&C[i-1][j]==false){
        C[i-1][j]=true;
        timduongdi(i-1,j,n,a+"U",A,B,C);
        C[i-1][j]=false;
    }
    if(j>0&&B[i][j-1]==1&&C[i][j-1]==false){
        C[i][j-1]=true;
        timduongdi(i,j-1,n,a+"L",A,B,C);
        C[i][j-1]=false;
    }
}

void dichuyentrongmecung(){
    int n;
    cin>>n;
    vector<vector<int>> A(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    if(A[0][0]==0) {
        cout<<-1<<endl;
        return;
    }
    vector<vector<bool>> C(n,vector<bool> (n,false));
    C[0][0]=true;
    vector<string> B;
    timduongdi(0,0,n,"",B,A,C);
    if(B.empty()) cout<<-1<<endl;
    else{
        sort(B.begin(),B.end());
        for(auto x:B) cout<<x<<" ";
    cout<<endl; 
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        dichuyentrongmecung();
    }
}
