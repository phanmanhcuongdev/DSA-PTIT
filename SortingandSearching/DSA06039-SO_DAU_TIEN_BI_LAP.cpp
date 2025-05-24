#include<iostream>
using namespace std;
bool timkiemtuyentinh(int N[],int n,int x){
	for(int i=x+1;i<n;i++){
		if(N[x]==N[i]) return true;
	}
	return false;
}
int main(){
	int t;cin>>t;
	while(t--){
	int n;
	cin>>n;
	int N[n];
	for(int i=0;i<n;i++){
		cin>>N[i];
	}
	bool k=false;
	for(int i=0;i<n-1;i++){
		if(timkiemtuyentinh(N,n,i)==true) {
			k=true;
			cout<<N[i]<<endl;
			break;
		}
	}
	if(k==false) cout<<"NO"<<endl;
}
}
