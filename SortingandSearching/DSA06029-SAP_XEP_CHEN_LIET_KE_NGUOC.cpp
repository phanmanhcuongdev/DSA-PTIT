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
	int n;
	cin>>n;
	int N[n];
	for(int i=0;i<n;i++){
		cin>>N[i];
	}
	vector<int> A;
	for(int i=0;i<n;i++){
		int key=N[i];
		int j=i-1;
		while(j>=0&&key<N[j]){
			N[j+1]=N[j];
			j--;
		}
		N[j+1]=key;
		push(N,i+1,A);
	}
	int x=n-1;int y=A.size();
	for(int i=x;i>=0;i--){
		cout<<"Buoc "<<i<<": ";
		y-=(i+1);
		for(int j=0;j<=i;j++){
			cout<<A[y+j];
			if(j!=i) cout<<" ";
		}
		cout<<endl;
	}
}
