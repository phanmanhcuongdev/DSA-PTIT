#include <iostream>
#include <algorithm>
using namespace std;

int maxCrossingSum(int A[], int l, int m, int r) {
    int left_sum = -1e9, right_sum = -1e9;
    int sum = 0;
    
    for (int i = m; i >= l; i--) {
        sum += A[i];
        left_sum = max(left_sum, sum);
    }
    
    sum = 0;
    for (int i = m + 1; i <= r; i++) {
        sum += A[i];
        right_sum = max(right_sum, sum);
    }

    return left_sum + right_sum; 
}

int maxSubArraySum(int A[], int l, int r) {
    if (l == r) {
        return A[l];
    }

    int m = (l + r) / 2;

    int left_sum = maxSubArraySum(A, l, m);
    int right_sum = maxSubArraySum(A, m + 1, r);
    int crossing_sum = maxCrossingSum(A, l, m, r);

    return max(left_sum, max(right_sum, crossing_sum));
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n; 
        int A[100]; 
        for (int i = 0; i < n; i++) {
            cin >> A[i]; 
        }
        cout << maxSubArraySum(A, 0, n - 1) << endl; 
    }

    return 0;
}
