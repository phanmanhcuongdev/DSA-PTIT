#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main(){
	stack<int> mystack;
	string comd;
	while(getline(cin,comd)){
		if(comd.substr(0,4)=="push"){
			int a=stoi(comd.substr(5));
			mystack.push(a);
		}else if(comd=="pop"){
		 		if(!mystack.empty()) mystack.pop();
			}
		else if(comd=="show"){
			if(mystack.empty()){
				cout<<"empty";
			}else
			{
				stack<int> temp=mystack;
				vector<int> res;
				while(!temp.empty()){
					res.push_back(temp.top());
					temp.pop();
				}
				for(int x=res.size()-1;x>=0;x--){
					cout<<res[x]<<(x==0?"":" ");
				}	
			}
			cout<<endl;
		}
	}
}
