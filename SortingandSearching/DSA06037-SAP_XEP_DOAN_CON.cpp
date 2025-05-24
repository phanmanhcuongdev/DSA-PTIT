#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int N[n];
		for(int i=0;i<n;i++){
			cin>>N[i];
		}
		int amin[n],amax[n];
		int imin=1e9,imax=-1e9;
		for(int i=n-1;i>=0;i--){
			imin=min(imin,N[i]);
			amin[i]=imin;
		}
		for(int i=0;i<n;i++){
			imax=max(imax,N[i]);
			amax[i]=imax;
		}
		multiset<int> a;
		int c=0;
		for(int i=0;i<n-1;i++){
			if(amax[i]<=amin[i+1]){
				a.insert(i+1);
				c++;
			}
		}
		if(c==0) cout<<0<<endl;
		else{
			cout<<c<<endl;
			for(int i:a){
			cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
