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
	int t;cin>>t;cin.ignore();
	stack<int> res;
	while(t--){
		string s;
		getline(cin,s);
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]>='0'&&s[i]<='9')
			{
				res.push(stoi(string(1,s[i])));
			}
			else
			{
				int a=res.top();res.pop();
				int b=res.top();res.pop();
				int c=tinh(a,b,s[i]);
				res.push(c);
			}
		}
		cout<<res.top()<<endl;
	}
}
