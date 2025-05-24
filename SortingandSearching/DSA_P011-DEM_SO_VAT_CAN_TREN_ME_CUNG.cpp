#include<iostream>
#include<vector>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	string chan;
	string le(n,'.');
	int c=0;
	for(int i=0;i<m;i++){
		if(i%2==0){
			cin>>chan;
			for(int i=0;i<n;i++){
				if(chan[i]=='#') if(chan[i-1]!='#'&&le[i]!='#') c++;
			}
		}else{
			cin>>le;
			for(int i=0;i<n;i++){
				if(le[i]=='#') if(le[i-1]!='#'&&chan[i]!='#') c++;
			}
		}
	}
	cout<<c;
}
