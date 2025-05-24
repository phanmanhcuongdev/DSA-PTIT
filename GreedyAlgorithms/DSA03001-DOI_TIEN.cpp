#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define nhap(n) int n;cin>>n;
#define t() int t;cin>>t;while(t--)
#define FOR(i,x,y) for(int i=x;i<y;i++)
int value[]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void money_value(int n){
    int tong=0;
    FOR(i,0,10){
        tong+=n/value[9-i];
        n%=value[9-i];
        if(n==0) {
            cout<<tong<<endl;
            break;
        }
    }
}

int main(){
    t()
    {
        nhap(n);
        money_value(n);
    }
}
