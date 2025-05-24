#include <bits/stdc++.h>

using namespace std;

#define t() int t;cin>>t;while(t--)

int main(){
	t(){
		string s;
		cin>>s;
		int j=s.size()-1;
		while(j>=0&&s[j]=='1'){
			s[j]='0';
			j--;
		}
		if(j>=0) s[j]='1';
		cout<<s<<endl;
	}	
}
