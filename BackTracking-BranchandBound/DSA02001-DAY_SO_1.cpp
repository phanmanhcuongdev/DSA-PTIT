#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void tinh(int A[],int n){
	cout<<"[";
	for(int i=0;i<n;i++){
		if(i>0) cout<<" ";
		cout<<A[i]; 
	}
	cout<<"]";
	cout<<endl;
	if(n==1) return;
	else {
		int B[n-1];
		for(int i=0;i<n-1;i++){
			B[i]=(A[i]+A[i+1]);
		}
		tinh(B,n-1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++) cin>>A[i];
		tinh(A,n);
	}
}
