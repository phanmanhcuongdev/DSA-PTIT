#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void khoitao(char A[],int n){
	for(int i=0;i<n;i++){
		A[i]='A';
	}
}
void inra(char A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i];
	}
	cout<<" ";
}
void sinhnhiphan(char A[],int n,int i){
	if(i==n){
		inra(A,n);
		return;
	}
	A[i]='A';
	sinhnhiphan(A,n,i+1);
	A[i]='B';
	sinhnhiphan(A,n,i+1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char A[n];
		sinhnhiphan(A,n,0);
		cout<<endl;
	}
}
