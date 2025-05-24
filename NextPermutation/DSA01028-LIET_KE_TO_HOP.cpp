#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void khoitao(int A[],int n){
	for(int i=0;i<n;i++) A[i]=i;
}
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	set<int> X;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		X.insert(x);
	}
	int H[X.size()];
	int r=0;
	for(auto y:X){
		H[r]=y;
		r++;
	}
	for(int i=0;i<m;i++) cout<<H[i]<<" ";
	cout<<endl;
	int a=X.size();
	int A[m];
	khoitao(A,m);
	bool k=true;
	while(k==true){
		int j=m-1;
		while(j>=0&&A[j]==a-1-m+j+1){
			j--;
		}
		if(j<0) k=false;
		else{
			A[j]++;
			for(int i=j+1;i<m;i++){
				A[i]=A[i-1]+1;
			}
			for(int i=0;i<m;i++){
				cout<<H[A[i]]<<" ";
			}
			cout<<endl;
		}
	}
}
