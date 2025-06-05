#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;
#define run() int t;cin>>t;while(t--)

int xuly(int i,const vector<string> &s){
	if(s[i]=="+"||s[i]=="-"||s[i]=="*"||s[i]=="/")
	{
		if(s[i]=="+") return xuly(i*2+1,s)+xuly(i*2+2,s);
		if(s[i]=="-") return xuly(i*2+1,s)-xuly(i*2+2,s);
		if(s[i]=="*") return xuly(i*2+1,s)*xuly(i*2+2,s);
		if(s[i]=="/") return xuly(i*2+1,s)/xuly(i*2+2,s);
	}else
	{
		return stoi(s[i]);
	}
}

int main()
{
	run(){
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		cout<<xuly(0,s)<<endl;
	}
}
