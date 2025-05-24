#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	long long t;cin>>t;
	while(t--){
	long long n;
	cin>>n;
	vector<long long> V(n);
	for(long long i=0;i<n;i++){
		cin>>V[i];
	}
	long long i=1;
	while(i<n){
		if(V[i]>=V[i-1]) i++;
		else break;
	}
	if(i==n) cout<<0;
	else cout<<i;
	cout<<endl;
	}
}
