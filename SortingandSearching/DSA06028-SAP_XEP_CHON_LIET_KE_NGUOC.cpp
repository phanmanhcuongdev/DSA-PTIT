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
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(N[min]>N[j]) min=j;
		}
		swap(N[min],N[i]);
		push(N,n,A);
	}
	int x=n-1;int y=A.size();
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
