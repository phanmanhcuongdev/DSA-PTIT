#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void inra(int A[],int n){
	if(A[0]==8&&A[n-1]==6){
		for(int i=0;i<n-1;i++) if(A[i]==8&&A[i+1]==8) return;
		for(int i=0;i<n-3;i++) if(A[i]==6&&A[i+1]==6&&A[i+2]==6&&A[i+3]==6) return;
		for(int i=0;i<n;i++){
			cout<<A[i];
		}
		cout<<endl;
	}
}
void sinhnhiphan(int A[],int n,int i){
	if(i==n){
		inra(A,n);
		return;
	}
	A[i]=6;
	sinhnhiphan(A,n,i+1);
	A[i]=8;
	sinhnhiphan(A,n,i+1);
}
using namespace std;
int main(){
	int n;
	cin>>n;
	int A[n];
	sinhnhiphan(A,n,0);
}
