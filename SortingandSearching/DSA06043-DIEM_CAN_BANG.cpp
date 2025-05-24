#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	short t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int N[n];
		int x=0;
		for(int i=0;i<n;i++) {
			cin>>N[i];
			x+=N[i];
		}
		if(n<=2) {
			cout<<-1<<endl;
			continue;
		}
		int trai=N[0],phai=x-N[0]-N[1];
		bool k=false;
		for(int i=1;i<n-1;i++){
			if(trai==phai) {
				k=true;
				cout<<i+1<<endl;
				break;
			}else{
				trai+=N[i];
				phai-=N[i+1];
			}
		}
		if(k==false) cout<<-1<<endl;
	}
}
