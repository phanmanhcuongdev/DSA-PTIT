#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<sstream>

using namespace std;

int main()
{
	int n;cin>>n;cin.ignore();
	vector<int> A[60];
	set<pair<int,int>> res;
	for(int i=0;i<n;i++)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		int a;
		while(ss>>a)
		{
			if(i<a) res.insert({i+1,a});
		}
	}
	for(auto z:res)
	{
		cout<<z.first<<" "<<z.second<<endl;
	}
}
