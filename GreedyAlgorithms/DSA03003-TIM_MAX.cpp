#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<numeric>

using namespace std;

#define t() long long t;cin>>t;while(t--)

void tim_max(vector<long long> A){
    long long tong=0;
    long long MOD=(1e9+7);
    for(long long i=0;i<A.size();i++){
        tong=(tong+(A[i]%MOD)*(i%MOD))%MOD;
    }
    cout<<tong<<endl;
}

int main(){
    t(){
        long long n;cin>>n;
        vector<long long> A;
        for(long long i=0;i<n;i++){
            long long x;cin>>x;
            A.push_back(x);
        }
        sort(A.begin(),A.end());
        tim_max(A);
    }    
}
