#include<iostream>
#include<fstream>
#include<stack>
#include<string>

using namespace std;

#define t() int t;cin>>t;cin.ignore();while(t--)

void writelog(string s){
	ofstream outFile("Log.txt",ios::app);
	if(outFile.is_open()){
		outFile<<s<<endl;
		outFile.close();
	}
}

string check(string s){
	stack<char> S;
	for(auto x:s){
		if(x==')')
		{
			bool ok=true;
			while(S.top()!='('){
				char tmp=S.top();
				if(tmp=='+'||tmp=='-'||tmp=='*'||tmp=='/') ok=false;
				S.pop();
			}
			if(ok) return "Yes";
			S.pop();
		}
		else
		{
			S.push(x);
		}
	}
	return "No";
}

int main(){
	//writelog("start");
	t(){
		string s;
		getline(cin,s);
		writelog(s);
		cout<<check(s)<<endl;
	}
	//writelog("end");
}
