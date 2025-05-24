#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int n,k;
int A[30];
string B[30];
void result(){
	for(int i=1;i<=k;i++){
		cout<<B[A[i]]<<" ";
	}
	cout<<endl;
}
void Try(int j){
	for(int i=A[j-1]+1;i<=n-k+j;i++){
		A[j]=i;
		if(j==k) result();
		else Try(j+1);
	}
}
int main(){
	cin>>n>>k;
	set<string> c;
	for(int i=0;i<n;i++){
		string a;
		cin>>a;
		c.insert(a);
	}
	int j=1;
	for(string a:c){
		B[j]=a;
		j++;
	}
	n=j-1;
	Try(1);

}
