#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	short t;
	cin>>t;
	while(t--){
		long long m,n;
		cin>>m>>n;
		long long M[m];
		for(long long i=0;i<m;i++) cin>>M[i];
		sort(M,M+m);
		bool xet=false;
		for(long long i=0;i<m-2;i++){
			long long j=i+1,k=m-1;
			while(j<k){
				if(M[i]+M[j]+M[k]==n) {
					xet=true;
					break;
				}
				if(M[i]+M[j]+M[k]<n) j++;
				else k--;
			}
			if(xet==true) break;
		}
		if(xet==true) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
