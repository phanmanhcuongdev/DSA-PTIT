#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second != b.second) 
        return a.second > b.second;
    return a.first < b.first; 
}
int main(){
	short t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> m(n);
		for(int i=0;i<n;i++){
			cin>>m[i];
		}
		map<int,int> N;
		for(int num:m){
			N[num]++;
		}
		vector<pair<int,int>> res(N.begin(),N.end());
		sort(res.begin(),res.end(),cmp);
		for(auto &p:res){
			while(p.second!=0){
				cout<<p.first<<" ";
				p.second--;
			}
		}
		cout<<endl;
	}
}
