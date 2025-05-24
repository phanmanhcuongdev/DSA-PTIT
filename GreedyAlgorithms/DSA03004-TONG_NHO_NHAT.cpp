#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> N(n);
        for(long long i=0;i<n;i++){
            cin>>N[i];
        }
        sort(N.begin(),N.end());
        vector<long long> odd,even;
        for(long long i=0;i<n;i++){
            if(i%2!=0) odd.push_back(N[i]);
            else even.push_back(N[i]);
        }
        long long a=0,b=0;
        for(auto x:odd) a=(a*10+x);
        for(auto x:even) b=(b*10+x);
        cout<<(long long)a+b<<endl;
    }
}
