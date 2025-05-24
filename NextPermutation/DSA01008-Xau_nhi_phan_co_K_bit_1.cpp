#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void khoitao(int A[],int n){
	for(int i=0;i<n;i++){
		A[i]=0;
	}
}
void inra(int A[],int n,int k){
	int j=0;
	for(int i=0;i<n;i++){
		j+=A[i];
	}
	if(j==k){
		for(int i=0;i<n;i++){
		cout<<A[i];
	}
	cout<<endl;
	}
}
void sinhnhiphan(int A[],int n,int i,int k){
	if(i==n){
		inra(A,n,k);
		return;
	}
	A[i]=0;
	sinhnhiphan(A,n,i+1,k);
	A[i]=1;
	sinhnhiphan(A,n,i+1,k);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int A[n];
		sinhnhiphan(A,n,0,k);
	}
}
