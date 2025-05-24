#include <iostream>
using namespace std;

#include <iostream>
#include <algorithm>
using namespace std;

long long countTriplets(long long A[], long long N, long long K) {
    sort(A, A + N);
    long long count = 0;

    for (long long i = 0; i < N - 2; i++) {
        long long j = i + 1, k = N - 1;
        while (j < k) {
            if (A[i] + A[j] + A[k] < K) {
                count += (k - j);
                j++;
            } else {
                k--;
            }
        }
    }
    return count;
}
int main() {
	long long t;cin>>t;
	while(t--){
	long long n,k;
	cin>>n>>k;
    long long A[n];
    for(long long i=0;i<n;i++) cin>>A[i];
    cout << countTriplets(A, n, k) << endl;
	}
}
