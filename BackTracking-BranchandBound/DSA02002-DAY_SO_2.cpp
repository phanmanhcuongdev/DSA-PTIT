#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void tinh(vector<int> A,vector<vector<int>> &C){
	int n=A.size();
	if(n==1) return;
	else {
		vector<int> B(n-1);
		for(int i=0;i<n-1;i++){
			B[i]=(A[i]+A[i+1]);
		}
		C.push_back(B);
		tinh(B,C);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> A(n);
		vector<vector<int>> ketqua;
		for(int i=0;i<n;i++) cin>>A[i];
		ketqua.push_back(A);
		tinh(A,ketqua);
		for(int i=ketqua.size()-1;i>=0;i--){
			if(i<ketqua.size()-1) cout<<" ";
			cout<<"[";
			for(int j=0;j<ketqua[i].size();j++){
				if(j>0) cout<<" ";
				cout<<ketqua[i][j];
			}
			cout<<"]";
		}
		cout<<endl;
	}
}
