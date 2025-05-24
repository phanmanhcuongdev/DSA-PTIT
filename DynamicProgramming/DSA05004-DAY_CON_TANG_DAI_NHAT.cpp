#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> N(n);
    for(int i=0;i<n;i++) cin>>N[i];
    vector<int> dp(n,1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (N[i] > N[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << endl;
}
