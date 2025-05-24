#include<iostream>
#include<algorithm>
using namespace std;
void init(int A[],int n){
	for(int i=1;i<=n;i++){
		cout<<A[i];
	}
	cout<<" ";
}
void khoitao(int A[],int n){
	for(int i=1;i<=n;i++){
		A[i]=i;
	}
}
void sinhtohop(int A[],int n,int k,bool &m){
	int i=k;
	while(i>=1&&A[i]==n-k+i){
		i--;
	}
	if(i==0) {
		m=false;
	}else{
		A[i]++;
		for(int j=i+1;j<=k;j++){
			A[j]=A[j-1]+1;
		}
		init(A,k);
	}
}
void sinhhoanvi(int A[],int n,bool &k){
	int i=n-1;
	while(i>=1&&A[i]>A[i+1]){
		i=i-1;
	}
	if(i==0){
		k=false;
		return;
	}
	else{
		int j=n;
		while(A[i]>A[j]) j--;
		swap(A[i],A[j]);
		reverse(A+i+1,A+n+1);
	}
	init(A,n);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool m=true;
		int A[n+1];
		khoitao(A,n);
		init(A,n);
		while(m==true){
			sinhhoanvi(A,n,m);
		}
		cout<<endl;
	}
}
