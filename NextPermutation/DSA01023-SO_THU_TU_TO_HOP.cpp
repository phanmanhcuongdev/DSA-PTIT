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
		int m,n;
		cin>>m>>n;
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
			int i=n;
			while(i>=1&&B[i]==m-n+i){
				i--;
			}
			if(i>0) {
				B[i]++;
				for(int j=i+1;j<=n;j++){
					B[j]=B[j-1]+1;
				}
			}
			k++;
		}
		cout<<k<<endl;
	}
}
