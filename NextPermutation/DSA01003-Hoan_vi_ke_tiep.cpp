#include <bits/stdc++.h>

using namespace std;

#define t() int t;cin>>t;while(t--)

void sinhtohop(int i,int A[],int n,int k){
	if(i==k+1){
		for(int j=1;j<=k;j++){
			cout<<A[j]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int j=A[i-1]+1;j<=n-k+i;j++){
		A[i]=j;
		sinhtohop(i+1,A,n,k);
	}
}

void khoitao(int A[],int n){
	for(int i=0;i<=n;i++) A[i]=i;
}

void tohopketiep(int A[],int n,int k){
	int i=k;
	while(i>=1&&A[i]==n-k+i) i--;
	if(i==0) {
		khoitao(A,k);
		for(int j=1;j<=k;j++){
			cout<<A[j]<<" ";
		}
		cout<<endl;
		return;
	}else{
		A[i]++;
		for(int j=i+1;j<=k;j++){
			A[j]=A[j-1]+1;
		}
		for(int j=1;j<=k;j++){
			cout<<A[j]<<" ";
		}
		cout<<endl;
		return;
	}
}

int main(){
	t(){
		int n ;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++) cin>>A[i];
		bool x=next_permutation(A,A+n);
		for(int i=0;i<n;i++) cout<<A[i]<<" ";
		cout<<endl;
	}	
}
