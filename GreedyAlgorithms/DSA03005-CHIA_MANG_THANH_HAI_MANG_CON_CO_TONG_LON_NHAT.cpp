#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define t() int t;cin>>t;while(t--)

int main(){
    t(){
        int n,k;
        cin>>n>>k;
        vector<int> A(n);
        for(int i=0;i<n;i++) cin>>A[i];
        sort(A.begin(),A.end());
        int tong=0,sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            tong+=A[i];
            if (i < k) sum1 += A[i];
            if (i < n - k) sum2 += A[i];    
        }
        cout << max(tong - 2 * sum1, tong - 2 * sum2) << endl;
    }
}
