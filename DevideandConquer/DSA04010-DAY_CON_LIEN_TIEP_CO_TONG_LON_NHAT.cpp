#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxCrossingArray(vector<int> &Arr,int l,int m,int r) {
    int right=-1e9;int left=-1e9 ;
    int sum=0;
    for (int i=m;i>=l;--i) {
        sum+=Arr[i];
        left=max(left,sum);
    }
    sum=0;
    for (int i=m+1;i<=r;i++) {
        sum+=Arr[i];
        right=max(right,sum);
    }
    return left+right;
}

int maxSumArray(vector<int> &Arr,int l,int r) {
    if (l==r) {
        return Arr[l];
    }
    int m=(l+r)/2;
    int left_sum=maxSumArray(Arr,l,m);
    int right_sum=maxSumArray(Arr,m+1,r);
    int cross_sum=maxCrossingArray(Arr,l,m,r);
    return max(left_sum,max(cross_sum,right_sum));
}

void solve() {
    int n;
    cin>>n;
    vector<int> Arr(n);
    for (int i=0;i<n;i++) {
        cin>>Arr[i];
    }
    cout<<maxSumArray(Arr,0,n-1)<<endl;
}

int main() {
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
