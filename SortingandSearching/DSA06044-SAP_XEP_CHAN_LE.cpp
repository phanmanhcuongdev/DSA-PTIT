#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	cin>>n;
	vector<int> V(n);
	vector<int> chan,le;
	for(int i=0;i<n;i++){
		cin>>V[i];
		if(i%2==0) chan.push_back(V[i]);
		else le.push_back(V[i]);
	}
	sort(chan.begin(),chan.end());
	sort(le.begin(),le.end(),cmp);
	int l=0,c=0;
	for(int i=0;i<n;i++){
		if(i%2==0) {
			V[i]=chan[c];
			c++;
		}
		else {
			V[i]=le[l];
			l++;
		}
	}
	for(int x:V){
		cout<<x<<" ";
	}
	cout<<endl;
}
