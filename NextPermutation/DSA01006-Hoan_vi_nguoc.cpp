#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
string init(int A[],int n){
	string s="";
	for(int i=1;i<=n;i++){
		s+=to_string(A[i]);
	}
	return s;
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
void sinhhoanvi(int A[],int n,bool &k,vector<string> &s){
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
	s.push_back(init(A,n));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> V;
		bool m=true;
		int A[n+1];
		khoitao(A,n);
		V.push_back(init(A,n));
		while(m==true){
			sinhhoanvi(A,n,m,V);
		}
		for(int i=V.size()-1;i>=0;i--){
			cout<<V[i]<<" ";
		}
		cout<<endl;
	}
}
