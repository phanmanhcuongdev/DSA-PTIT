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
void sinhhoanvi(int A[],int n){
	int i=n-1;
	while(i>=1&&A[i]>A[i+1]){
		i=i-1;
	}
	if(i<=0){
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
		int n,k;
		cin>>n>>k;
		bool m=true;
		int A[k+1];
		khoitao(A,k);
		init(A,k);
		while(m==true){
			sinhtohop(A,n,k,m);
		}
		cout<<endl;
	}
}
