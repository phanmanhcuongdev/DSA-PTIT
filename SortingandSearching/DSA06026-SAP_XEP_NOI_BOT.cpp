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
	for(int i=0;i<n-1;i++){
		bool check=true;
		for(int j=0;j<n-i-1;j++){
			if(N[j]>N[j+1]){
				check=false;
				swap(N[j],N[j+1]);
			} 
		}
		if(check==false) {
			cout<<"Buoc "<<i+1<<": ";
			inra(N,n);
		}else{
			break;
		}
	}
}
