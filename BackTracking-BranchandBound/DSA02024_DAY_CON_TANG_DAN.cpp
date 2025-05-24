#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

vector<string> res;

int A[100]={0};
int n;

void Try(int i,string s,int count){
    for(int j=i+1;j<=n;j++){
        if(A[i]<A[j]){
            if(count>0) res.push_back(s+to_string(A[j])+" ");
            Try(j,s+to_string(A[j])+" ",count+1);
        }
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>A[i];
    Try(0,"",0);
    sort(res.begin(),res.end());
    for(auto x:res){
        cout<<x<<endl;
    }
} 
