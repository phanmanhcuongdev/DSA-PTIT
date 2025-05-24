#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int A[100];
int B[100];
vector<vector<int>> ketqua;
int n,k;
bool m=false;
void result(){
	int c=0;
	int x;
	vector<int> mang;
	for(int i=0;i<n;i++){
		if(A[i]==1) {
		c+=B[i];
		mang.push_back(B[i]);
		}
	}
	if(c==k) {
		ketqua.push_back(mang);
		m=true;
	}
}
void sinhnhiphan(int j){
	if(j==n){
		result();
		return;
	}
	A[j]=0;
	sinhnhiphan(j+1);
	A[j]=1;
	sinhnhiphan(j+1);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		cin>>k;
		for(int i=0;i<n;i++) cin>>B[i];
		sort(B,B+n);
		sinhnhiphan(0);
		if(m==false) cout<<-1;
		else{
			sort(ketqua.begin(),ketqua.end());
			for (auto &subset : ketqua) {
                cout << "[";
                for (size_t i = 0; i < subset.size(); i++) {
                    if (i > 0) cout << " ";
                    cout << subset[i];
                }
                cout << "] ";
            }
		}
		cout<<endl;
		ketqua.clear();
        m = false;
	}
}
