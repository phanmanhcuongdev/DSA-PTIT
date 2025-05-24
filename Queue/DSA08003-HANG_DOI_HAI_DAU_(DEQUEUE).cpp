#include<iostream>
#include<deque>
#include<sstream>

using namespace std;

int main(){
	int t;cin>>t;cin.ignore();
	deque<int> res;
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string a;ss>>a;
		if(a=="PUSHBACK")
		{
			ss>>a;
			int b=stoi(a);
			res.push_back(b);
		}
		if(a=="PUSHFRONT")
		{
			ss>>a;
			int b=stoi(a);
			res.push_front(b);
		}
		if(a=="POPBACK")
		{
			if(!res.empty()){
				res.pop_back();
			}
		}
		if(a=="POPFRONT")
		{
			if(!res.empty()){
				res.pop_front();
			}
		}
		if(a=="PRINTBACK")
		{
			if(!res.empty()){
				cout<<res.back()<<endl;
			}
			else
			{
				cout<<"NONE"<<endl;
			}
		}
		if(a=="PRINTFRONT")
		{
			if(!res.empty()){
				cout<<res.front()<<endl;
			}
			else
			{
				cout<<"NONE"<<endl;
			}
		}
	}
}
