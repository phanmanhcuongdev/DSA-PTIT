#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define run() long long t;cin>>t;while(t--)
#define nhap(x) long long x;cin>>x;
#define INP(A,n) for(long long i=0;i<n;i++) cin>>A[i];
#define FOR(i,x,y) for(long long i=x;i<y;i++)

int main()
{
	run(){
		nhap(n);
		vector<long long> A(n);
		INP(A,n);
		sort(A.begin(),A.end());
		long long a=0,b=0;
		FOR(i,0,n){
			if(i%2==0) a=a*10+A[i];
			else b=b*10+A[i];
		}
		cout<<a+b<<endl;
	}
}
