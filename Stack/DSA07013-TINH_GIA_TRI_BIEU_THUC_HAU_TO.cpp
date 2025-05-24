#include<iostream>
#include<stack>

using namespace std;

int tinh(int a,int b,char c){
	if(c=='+') return a+b;
	if(c=='-') return a-b;
	if(c=='*') return a*b;
	if(c=='/') return a/b;
	return 0;
}

int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack<int> S;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') S.push(s[i]-'0');
			else
			{
				int a=S.top();S.pop();
				int b=S.top();S.pop();
				S.push(tinh(b,a,s[i]));	
			}
		}
		cout<<S.top()<<endl;
	}
}
