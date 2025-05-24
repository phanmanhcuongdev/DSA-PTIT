#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(){
	int t;cin>>t;cin.ignore();
	while(t--){
		queue<int> que;
		int query;cin>>query;cin.ignore();
		for(int x=0;x<query;x++)
		{
			string s;
			getline(cin,s);
			switch(s[0]){
				case '1':
				{
					cout<<que.size()<<endl;
					break;
				}
				case '2':
				{
					if(que.empty()) cout<<"YES"<<endl;
					else cout<<"NO"<<endl;
					break;
				}
				case '3':
				{
					int x=stoi(s.substr(2));
					que.push(x);
					break;
				}
				case '4':
				{
					if(!que.empty()) que.pop();
					break;
				}
				case '5':
				{
					if(!que.empty()) cout<<que.front()<<endl;
					else cout<<-1<<endl;
					break;
				}
				case '6':
				{
					if(!que.empty()) cout<<que.back()<<endl;
					else cout<<-1<<endl;
					break;
				}
			}
		}
	}
}
