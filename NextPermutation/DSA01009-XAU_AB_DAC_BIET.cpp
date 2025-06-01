#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include<bitset>

using namespace std;

bool isValid(const string& s, int k) {
	int count=0;
	int n=s.length();
	for(int i=0;i<=n-k;i++)
	{
		if(s.substr(i,k)==string(k,'A')){
			if((i==0||s[i-1]!='A')&&(i+k==n||s[i+k]!='A'))
			{
				count++;
				i+=k-1;
			}
		}
	}
	return count==1;
}

void generateABStrings(int n, int k) {
	vector<string> result;
	for(int mask=0;mask<(1<<n);++mask)
	{
		string bitStr=bitset<20>(mask).to_string().substr(20-n,n);
		string s;
		for(char c:bitStr)
		{
			s+=(c=='1')?'B':'A';
		}
		if(isValid(s,k))
		{
			result.push_back(s);
		}
	}
	cout << result.size() << "\n";
    for (const string& str : result) {
        cout << str << "\n";
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    generateABStrings(n, k);
    return 0;
}
