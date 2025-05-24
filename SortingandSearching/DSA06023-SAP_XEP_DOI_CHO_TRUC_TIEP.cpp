#include<iostream>
using namespace std;
int main(){
	short n;
	cin>>n;
	short m[n];
	for(short i=0;i<n;i++) cin>>m[i];
	for(short i=0;i<n-1;i++){
		for(short j=i+1;j<n;j++){
			if(m[i]>m[j]) swap(m[i],m[j]);
		}
		cout<<"Buoc "<<i+1<<": ";
		for(short i=0;i<n;i++) cout<<m[i]<<" ";
		cout<<endl;
	}
}
