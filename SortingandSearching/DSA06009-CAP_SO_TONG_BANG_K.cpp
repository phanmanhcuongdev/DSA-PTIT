#include<iostream>
#include<string>
#include<vector>
using namespace std;
int ternarySearch(short N[],short value,short start,short end){
	if(start>end) return -1;
	short mid1=start+(end-start)/3;
	short mid2=start+2*(end-start)/3;
	if(N[mid1]==value) return mid1;
	if(N[mid2]==value) return mid2;
	if(value<N[mid1])
		return ternarySearch(N,value,start,mid1-1);
	if(value>N[mid2])
		return ternarySearch(N,value,mid2+1,end);
	return ternarySearch(N,value,mid1+1,mid2-1);	
}
short timkiem(short N[],short n,short value,short vitri){
	short c=0;
	short index;
	while((index = ternarySearch(N, value, vitri + 1, n - 1)) != -1){
		N[index]=-1;
		c++;
	}
	return c;
}
int main() {
	short t;
	cin>>t;
	while(t--){
		short n,k;
		cin>>n>>k;
		short N[n];
		for(short i=0;i<n;i++){
			cin>>N[i];
		}
		short c=0;
		for(short i=0;i<n-1;i++){
			short m=k-N[i];
			for(short j=i+1;j<n;j++){
			    if(m==N[j]) c++;
			}
		}
		cout<<c<<endl;
	}
}
