#include<iostream>
#include<stack>

using namespace std;

string ktra(string s){
	stack<char> temp;
	for(auto x:s){
		if(x=='('||x=='{'||x=='['||temp.empty()) temp.push(x);
		else
		{
			if(x==')'){
				if(temp.top()=='(') temp.pop();
				else return "NO\n";
			}
			if(x==']'){
				if(temp.top()=='[') temp.pop();
				else return "NO\n";
			}
			if(x=='}'){
				if(temp.top()=='{') temp.pop();
				else return "NO\n";
			}
		}
	}
	if(temp.size()) return "NO\n";
	return "YES\n";
}

int main(){
	int t;cin>>t;while(t--)
	{
		string s;
		cin>>s;
		cout<<ktra(s);
	}
}
