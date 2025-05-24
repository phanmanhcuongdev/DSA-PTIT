#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define nhap(x) int x;cin>>x;
#define nhaps(x) string x;cin>>x;
#define vt(x) vector<int> x;
#define vts(x) vector<string> x;
#define FOR(i,x,y) for(int i=x;i<y;i++)
#define pb push_back

int n, Min = 1e9;
vector<string> a;
vector<bool> used;
vector<string> path;

int count_common(const string &s1,const string &s2){
    int cnt=0;
    int i=0;int j=0;
    while( i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            cnt++;
            i++;j++;
        }
        else if(s1[i]<s2[j]) i++;
        else j++;
    }
    return cnt;
}

void Try(int step,int cur_cost){
    if(cur_cost>=Min) return;

    if(step==n){
        Min=min(Min,cur_cost);
        return;
    }

    FOR(i,0,n){
        if(!used[i]){
            used[i]=true;
            path.pb(a[i]);
            int add_cost=0;
            if(path.size()>=2){
                add_cost=count_common(path[path.size()-2],path[path.size()-1]);
            }
            Try(step+1,cur_cost+add_cost);
            path.pop_back();
            used[i]=false;
        }
    }

}

int main(){
    cin>>n;
    a.resize(n);
    FOR(i,0,n) cin>>a[i];
    used.assign(n,false);
    Try(0,0);
    cout<<Min;
}
