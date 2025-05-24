#include<iostream>
#include<stack>

using namespace std;

int main(){
	int t;cin>>t;while(t--)
	{
		string s;
		cin>>s;
		stack<int> res;
		res.push(-1);
		int count=0;
		for(int i=0;i<s.size();i++)
		{
			if (s[i]=='(') res.push(i);
			else
			{
				res.pop();
				if(res.size()>0)
				{
					count=max(count,i-res.top());
				}
				else{
					res.push(i);
				}
			}
		}
		cout<<count<<endl;
	}
}
