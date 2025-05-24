#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
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
		int n,k;
		cin>>n>>k;
		set<int> a;
		int A[k];
		for(int i=0;i<k;i++){
			cin>>A[i];
		}
		for(int i=0;i<k;i++){
			a.insert(A[i]);
		}
		int j=k-1;
		while(j>=0&&A[j]==n-k+j+1){
			j--;
		}
		if(j<0) {
			cout<<k<<endl;;
			continue;
		}
		else{
			A[j]++;
			for(int m=j+1;m<k;m++){
				A[m]=A[m-1]+1;
			}
			for(int i=0;i<k;i++){
				a.insert(A[i]);
			}
			cout<<a.size()-k<<endl;
		}
	}
}
