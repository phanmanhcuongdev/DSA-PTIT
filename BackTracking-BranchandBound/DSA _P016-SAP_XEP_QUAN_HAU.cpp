#include<iostream>
#include<vector>

using namespace std;

void timvitri(int max_,int hang,int n,vector<bool> &cot,vector<bool> &cheochinh,vector<bool> &cheophu,int &max,vector<vector<int>> &A){
    if(hang==n){
        if(max==-1){
            max=max_;
            return;
        }
        else
        {
            if(max<max_) max=max_;
            return;
        }
    }
    for(int i=0;i<cot.size();i++){
        if(cot[i]||cheochinh[i-hang+n-1]||cheophu[i+hang]) continue;
        int diem = max_ + A[hang][i];
        cot[i]=cheochinh[i-hang+n-1]=cheophu[i+hang]=true;
        timvitri(diem,hang+1,n,cot,cheochinh,cheophu,max,A);
        cot[i]=cheochinh[i-hang+n-1]=cheophu[i+hang]=false;
    }
}

void sapxepquanhau(){
    int n;
    n=8;
    vector<vector<int>> A(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    int max=-1;
    vector<bool> cot(n,false);
    vector<bool> cheochinh(2*n,false);
    vector<bool> cheophu(2*n,false);
    timvitri(0,0,n,cot,cheochinh,cheophu,max,A);
    cout<<max<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Test "<<i<<": ";
        sapxepquanhau();
    }
}
