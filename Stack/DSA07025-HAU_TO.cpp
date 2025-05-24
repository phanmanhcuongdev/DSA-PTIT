#include<iostream>
#include<stack>
#include<sstream>
#include<vector>

using namespace std;

long long tinh(long long a,long long b,string c)
{
	if(c=="+") return a+b;
	if(c=="-") return a-b;
	if(c=="*") return a*b;
	if(c=="/") return a/b;
	return 0;
}

int main(){
	int t;cin>>t;while(t--)
	{
		int x;cin>>x;
		string a;
		stack<long long> res; 
		for(int i=0;i<x;i++)
		{
			cin>>a;
			if(a=="+"||a=="-"||a=="*"||a=="/")
			{
				long long A=res.top();res.pop();
				long long B=res.top();res.pop();
				long long c=tinh(B,A,a);
				res.push(c);
			}
			else res.push(stoll(a));
		}
		cout<<res.top()<<endl;
	}
}
