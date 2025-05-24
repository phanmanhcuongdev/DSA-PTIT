#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void khoitao(int A[],int n){
	for(int i=1;i<=n;i++){
		A[i]=i;
	}
}
void inra(int A[],int n){
	for(int i=1;i<=n;i++){
		cout<<char('A'-1+A[i]);
	}
	cout<<endl;
}
void sinhtohop(int A[],int n,int k,bool &m){
	int i=k;
	while(i>=1&&A[i]==n-k+i) i--;
	if(i==0) m=false;
	else{
		A[i]++;
		for(int j=i+1;j<=k;j++) A[j]=A[j-1]+1;
		inra(A,k);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int A[k+1];
		khoitao(A,k);
		inra(A,k);
		bool m=true;
		while(m==true) sinhtohop(A,n,k,m);
	}
}
