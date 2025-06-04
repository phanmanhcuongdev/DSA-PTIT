#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/*
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
}*/

vector<int> money_value={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void solve() {
    int n;cin>>n;
    int result=0;
    for (int i=9;i>=0;i--) {
        if (n==0) break;
        if (n>=money_value[i]) {
            result+=n/money_value[i];
            n%=money_value[i];
        }
    }
    cout<<result<<endl;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
}
