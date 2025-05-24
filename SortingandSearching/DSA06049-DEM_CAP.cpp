#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	long long t;cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		long long N[n];
		for(long long i=0;i<n;i++){
			cin>>N[i];
		}
		sort(N,N+n);
		long long k=0;
		for(long long i=0;i<n-1;i++){
			long long j=lower_bound(N+i+1,N+n,N[i]+m)-N;
			k+=(j-i-1);
		}
		cout<<k<<endl;
	}
}
