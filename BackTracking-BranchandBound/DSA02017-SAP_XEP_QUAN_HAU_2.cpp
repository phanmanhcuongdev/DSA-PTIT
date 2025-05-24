#include<iostream>
#include<vector>
#include<string>
#include<algorithm>>

using namespace std;

#define t() int t;cin>>t;while(t--)
#define FOR(i,x,y) for(int i=x;i<y;i++)
#define nhap(x) int x;cin>>x;
#define pb push_back
#define vt(x) vector<int> x;
#define vt2(x) vector<vector<int>> x

vt2(x)(8,vector<int>(8));
void Sapxepquanhau(int hang,int max,int &res,int n,vector<bool> &cot,vector<bool> &cheochinh,vector<bool> &cheophu,vector<vector<int>> &x){
    if(hang==n){
        if(res==-1){
            res=max;
            return;
        }
        else
        {
            if(max>res){res=max;}
            return;
        }
    }
    FOR(i,0,cot.size()){
        if(cot[i]||cheochinh[i-hang+n-1]||cheophu[hang+i]) continue;
        cot[i]=cheochinh[i-hang+n-1]=cheophu[hang+i]=true;
        Sapxepquanhau(hang+1,max+x[hang][i],res,n,cot,cheochinh,cheophu,x);
        cot[i]=cheochinh[i-hang+n-1]=cheophu[hang+i]=false;
    }
}

int main(){
    t(){
        FOR(i,0,8){
            FOR(j,0,8){
                cin>>x[i][j];
            }
        }
        int max=-1;
        vector<bool> cot(8,false);
        vector<bool> cheochinh(16,false);
        vector<bool> cheophu(16,false);
        Sapxepquanhau(0,0,max,8,cot,cheochinh,cheophu,x);
        cout<<max<<endl;
    }
}
