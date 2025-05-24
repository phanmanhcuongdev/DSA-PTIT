#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int t;cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<int> V(n);
	for(int i=0;i<n;i++){
		cin>>V[i];
	}
	int min=1e9;
	sort(V.begin(),V.end());
	for(int i=1;i<n;i++){
		if(V[i]-V[i-1]<min) min=V[i]-V[i-1];
	}
	cout<<min;
	cout<<endl;

	}
}
