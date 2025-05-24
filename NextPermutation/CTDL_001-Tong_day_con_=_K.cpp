#include <bits/stdc++.h>

using namespace std;

int A[1000];int n;int k;vector<int> Ar;int cnt=0;

bool kiemtra(){
	int x=0;
	for(int i=0;i<n;i++){
		if(A[i]==1) x+=Ar[i];
	}
	if(x==k) return true;
	return false;
}

void sinhnhiphan(int i){
	if(i==n){
		if(kiemtra()==false) return;
		cnt++;
		for(int j=0;j<n;j++){
			if(A[j]==1) cout<<Ar[j]<<" ";
		}
		cout<<endl;
		return;
	}
	A[i]=0;
	sinhnhiphan(i+1);
	A[i]=1;
	sinhnhiphan(i+1);
}

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		Ar.push_back(x);
	}
	sinhnhiphan(0);
	cout<<cnt<<endl;
}
