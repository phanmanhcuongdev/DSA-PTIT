#include<iostream>
#include<vector>

using namespace std;

int SumArray(vector<int> N,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=N[i];
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> N(n);
        for(int i=0;i<n;i++) cin>>N[i];
        if(SumArray(N,n)%2==1) {
            cout<<"NO"<<endl;
            continue;
        }
        int target=(SumArray(N,n)/2);
        vector<bool> tongkhathi(target+1,false);
        tongkhathi[0]=true;
        for(int j=0;j<n;j++){
            for(int i=target;i>=N[j];i--){
                if(tongkhathi[i-N[j]]) tongkhathi[i]=true;
            }
        }
        if(tongkhathi[target]==true) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
