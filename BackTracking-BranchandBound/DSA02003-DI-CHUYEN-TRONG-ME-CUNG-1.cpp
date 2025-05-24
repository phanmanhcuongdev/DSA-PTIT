#include<iostream>
#include<vector>
using namespace std;
vector<string> ketqua;
string duongdi;
void dichuyen(int i,int j,vector<vector<int>> &A){
	if(i==j&&i==A.size()-1) {
		ketqua.push_back(duongdi);
		return;
	}
	else{
		int n=A.size();
		if(i+1<n&&A[i+1][j]==1) {
			duongdi+='D';
			dichuyen(i+1,j,A);
			duongdi.pop_back();
		}
		if(j+1<n&&A[i][j+1]==1) {
			duongdi+='R';
			dichuyen(i,j+1,A);
			duongdi.pop_back();
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<int>> A(n,vector<int>(n));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>A[i][j];
			}
		}
		if(A[0][0]==0) cout<<-1;
		else{
			dichuyen(0,0,A);
			if(ketqua.empty()) cout<<-1;
			else{
				for(auto a:ketqua){
					cout<<a<<" ";
				}
			}
		}
		cout<<endl;
		duongdi="";
		ketqua.clear();
	}
}
