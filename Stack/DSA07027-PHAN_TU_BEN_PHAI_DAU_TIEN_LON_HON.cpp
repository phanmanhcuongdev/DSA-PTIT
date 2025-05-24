#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		vector<int> res(n,-1);
		stack<int> temp;
		vector<int> A(n);
		for(int i=0;i<n;i++) cin>>A[i];
		for(int i=n-1;i>=0;i--)
		{
			if(temp.empty()) 
			{
				res[i]=-1;
				temp.push(A[i]);
			}
			else
			{
				while(!temp.empty()&&temp.top()<=A[i]) temp.pop();
				if(temp.empty())
				{
					res[i]=-1;
					temp.push(A[i]);
				}
				else
				{
					res[i]=temp.top();
					temp.push(A[i]);
				}
			}
		}
		for(int i=0;i<n;i++) cout<<res[i]<<" ";
		cout<<endl;
	}
}
