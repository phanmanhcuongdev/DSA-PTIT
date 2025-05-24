#include<iostream>
using namespace std;
void inra(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i];
		if(i!=n-1) cout<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	int N[n];
	for(int i=0;i<n;i++){
		cin>>N[i];
	}
	for(int i=0;i<n;i++){
		int key=N[i];
		int j=i-1;
		while(j>=0&&key<N[j]){
			N[j+1]=N[j];
			j--;
		}
		N[j+1]=key;
		cout<<"Buoc "<<i<<": ";
		inra(N,i+1);
	}
}
