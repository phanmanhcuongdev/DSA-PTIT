#include<iostream>
#include<vector>
using namespace std;
vector<char> ngay(10);
void sinh(int i,vector<char> A[]){
    if((ngay[0]=='0'&&ngay[1]=='0')||(ngay[3]=='0'&&ngay[4]=='0')) return;
    if(i==10){
        for(int j=0;j<10;j++) cout<<ngay[j];
        cout<<endl;
        return;
    }
    for(auto x:A[i]){
        ngay[i]=x;
        sinh(i+1,A);
    }
}
int main(){
    vector<char> A[10];
    A[0]={'0','2'};
    A[1]={'0','2'};
    A[2]={'/'};
    A[3]={'0'};
    A[4]={'0','2'};
    A[5]={'/'};
    A[6]={'2'};
    A[7]={'0','2'};
    A[8]={'0','2'};
    A[9]={'0','2'};
    sinh(0,A);
}
