#include<iostream>
#include<vector>
using namespace std;
void inra(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i];
		if(i!=n-1) cout<<" ";
	}
	cout<<endl;
}
void push(int B[],int n,vector<int> &A){
	for(int i=0;i<n;i++){
		A.push_back(B[i]);
	}
}
int main(){
	short t;cin>>t;
	while(t--){
	int n;
	cin>>n;
	int N[n];
	for(int i=0;i<n;i++){
		cin>>N[i];
	}
	vector<int> A;
	for(int i=0;i<n-1;i++){
		bool check=true;
		for(int j=0;j<n-i-1;j++){
			if(N[j]>N[j+1]) {
			swap(N[j],N[j+1]);
			check=false;
			}
		}
		if(check==false){
		push(N,n,A);}
		else break;
	}
	int x=A.size()/n;int y=A.size();
	for(int i=x;i>=1;i--){
		cout<<"Buoc "<<i<<": ";
		y-=n;
		for(int j=0;j<n;j++){
			cout<<A[y+j];
			if(j!=n-1) cout<<" ";
		}
		cout<<endl;
	}
}
}
