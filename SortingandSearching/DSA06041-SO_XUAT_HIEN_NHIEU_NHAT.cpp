#include<iostream>
using namespace std;
int timkiemtuyentinh(int N[],int n,int x){
	int c=1;
	for(int i=x+1;i<n;i++){
		if(N[x]==N[i]) c++;
	}
	return c;
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
	for(int i=0;i<n;i++){
		if(timkiemtuyentinh(N,n,i)>(n/2)) {
			k=true;
			cout<<N[i]<<endl;
			break;
		}
	}
	if(k==false) cout<<"NO"<<endl;
}
}
