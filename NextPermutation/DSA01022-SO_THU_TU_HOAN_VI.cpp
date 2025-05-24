#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k=1;
		int A[n+1];
		for(int i=1;i<=n;i++){
			cin>>A[i];
		}
		int B[n+1];
		for(int i=1;i<=n;i++){
			B[i]=i;
		}
		while(memcmp(A+1, B+1, n * sizeof(int)) != 0){
			int j=n-1;
			while(j>=1&&B[j]>B[j+1]){
				j--;
			}
			if(j>0) {
				int i=n;
				while(B[j]>B[i]) i--;
				swap(B[i],B[j]);
				reverse(B+j+1,B+n+1);
			}
			k++;
		}
		cout<<k<<endl;
	}
}
