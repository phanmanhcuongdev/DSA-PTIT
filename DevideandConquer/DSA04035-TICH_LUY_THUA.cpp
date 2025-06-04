#include <iostream>

using namespace std;

const int MOD=1e9+7;

long long modPow(long long a,long long b) {
    if (b==0) return 1;
    long long half=modPow(a,b/2);
    long long result=((half%MOD)*(half%MOD))%MOD;
    if (b%2==1) result=(result*(a%MOD))%MOD;
    return result;
}

int main() {
    while (true) {
        long long a,b;
        cin>>a>>b;
        if (a==b&&b==0) break;
        cout<<modPow(a,b)<<endl;
    }
    return 0;
}
