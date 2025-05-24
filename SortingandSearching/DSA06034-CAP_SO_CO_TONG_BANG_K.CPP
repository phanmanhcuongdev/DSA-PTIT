#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	short t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long N[n];
		for(int i=0;i<n;i++) cin>>N[i];
		sort(N,N+n);
		long long count=0;
		for(int i=0;i<n-1;i++){
			long long l=lower_bound(N+i+1,N+n,k-N[i])-N;
			long long r=upper_bound(N+i+1,N+n,k-N[i])-N;
			count+=r-l;
		}
		cout<<count<<endl;
	}
}
