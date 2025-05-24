#include<iostream>
#include<vector>

using namespace std;

void timvitri(int &bienphap,int hang,int n,vector<int> &cot,vector<int> &cheochinh,vector<int> &cheophu){
    if(hang==n){
        bienphap++;
        return;
    }
    for(int i=0;i<cot.size();i++){
        if(cot[i]||cheochinh[hang-i+n-1]||cheophu[hang+i]) continue;
        cot[i]=cheochinh[hang-i+n-1]=cheophu[hang+i]=true;
        timvitri(bienphap,hang+1,n,cot,cheochinh,cheophu);
        cot[i]=cheochinh[hang-i+n-1]=cheophu[hang+i]=false;
    }
}

void cachdatquanhau(){
    int n;
    cin>>n;
    vector<int> cot(n,false);
    vector<int> cheochinh(2*n,false);
    vector<int> cheophu(2*n,false);
    int bienphap=0;
    timvitri(bienphap,0,n,cot,cheochinh,cheophu);
    cout<<bienphap<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cachdatquanhau();
    }
}
