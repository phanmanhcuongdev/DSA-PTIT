#include<iostream>
using namespace std;
int main(){
	short t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int N[n];
		for(int i=0;i<n;i++){
			cin>>N[i];
		}
		for(int i=0;i<=n-k;i++){
			int max=i;
			for(int j=i;j<i+k;j++){
				if(N[max]<N[j]) max=j;
			}
			cout<<N[max]<<" ";
		}
		cout<<endl;
	}
}
