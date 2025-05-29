#include<iostream>
#include<cmath>

using namespace std;

const long long MOD = 1000000007;

long long modPow(long long N,long long K)
{
	if(K==0) return 1;
	long long half=modPow(N,K/2);
	long long res=(half*half)%MOD;
	if(K%2==1) res=(res*N)%MOD;
	return res;
}

void solve()
{
	long long n,k;
	cin>>n>>k;
	cout<<modPow(n,k)<<"\n";
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
