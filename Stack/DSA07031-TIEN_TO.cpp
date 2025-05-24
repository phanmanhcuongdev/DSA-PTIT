#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;

long long tinh(long long a,long long b,string c)
{
	if(c=="+") return a+b;
	if(c=="-") return a-b;
	if(c=="*") return a*b;
	if(c=="/") return a/b;
	return 0;
}

int main()
{
	int t;cin>>t;while(t--)
	{
		int n;
		cin>>n;
		vector<string> A(n);
		for(int i=0;i<n;i++) cin>>A[i];
		stack<long long> res;
		for(int i=n-1;i>=0;i--)
		{
			if(A[i]=="+"||A[i]=="-"||A[i]=="*"||A[i]=="/")
			{
				long long a=res.top();res.pop();
				long long b=res.top();res.pop();
				long long c=tinh(a,b,A[i]);
				res.push(c);
			}
			else res.push(stoll(A[i]));
		}
		cout<<res.top()<<endl;
	}
}
