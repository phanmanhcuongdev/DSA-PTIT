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
	if(A[0]=='H'&&A[n-1]=='A'){
		for(int i=0;i<n-1;i++){
			if(A[i]=='H'&&A[i+1]=='H') {
				return;
			}
		}
		for(int i=0;i<n;i++){
		cout<<A[i];
	}
	cout<<endl;
	}else return;
}
void sinhnhiphan(char A[],int n,int i){
	if(i==n){
		inra(A,n);
		return;
	}
	A[i]='A';
	sinhnhiphan(A,n,i+1);
	A[i]='H';
	sinhnhiphan(A,n,i+1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size()-1;
		while(n>=0&&s[n]=='0'){
			s[n]='1';
			n--;
		}
		if(n>=0) s[n]='0';
		cout<<s<<endl;
	}
}
