#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void khoitao(int A[],int n){
	for(int i=1;i<=n;i++) A[i]=i;
}
using namespace std;
int main(){
	int n;
	cin>>n;
	int B[n+1];
	for(int i=1;i<=n;i++) cin>>B[i];
	sort(B+1,B+1+n);
	int A[n+1];
	khoitao(A,n);
	bool k=true;
	for(int i=1;i<=n;i++) cout<<B[i]<<" ";
	cout<<endl;
	while(k==true){
		int i=n-1;
		while(i>=1&&A[i]>A[i+1]){
			i--;
		}
		if(i==0) k=false;
		else{
			int j=n;
			while(A[i]>A[j]) j--;
			swap(A[i],A[j]);
			reverse(A+i+1,A+n+1);
			for(int i=1;i<=n;i++){
				cout<<B[A[i]]<<" ";
			}
			cout<<endl;
		}
	}
}
