#include<iostream>
#include<stack>
#include<sstream>

using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		stack<string> res;
		string a;
		stringstream ss(s);
		while(ss>>a)
		{
			res.push(a);
		}
		while(!res.empty())
		{
			cout<<res.top()<<" ";
			res.pop();
		}
		cout<<endl;
	}
}
