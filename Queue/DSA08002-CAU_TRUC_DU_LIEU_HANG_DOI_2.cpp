#include<iostream>
#include<queue>
#include<sstream>

using namespace std;

int main(){
	int t;
	cin>>t;cin.ignore();
	queue<int> q;
	for(int i=0;i<t;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string a;ss>>a;
		if(a=="PUSH")
		{
			ss>>a;
			int b=stoi(a);
			q.push(b);
		}
		else
		{
			if(a=="POP")
			{
				if(!q.empty()) q.pop();
			}
			else
			{
				if(a=="PRINTFRONT")
				{
					if(!q.empty()) cout<<q.front()<<endl;
					else cout<<"NONE"<<endl;
				}
			}	
		}
	}
}
