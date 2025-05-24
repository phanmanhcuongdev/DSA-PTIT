#include<iostream>
using namespace std;

char A[50];
int n;
char alpha;

void lietke(int c,char last_char){
    if(c==n){
        for(int i=0;i<n;i++){
            cout<<A[i];
        }
        cout<<endl;
        return;
    }
    for(char ch=last_char;ch<=alpha;ch++){
        A[c]=ch;
        lietke(c+1,ch);
    }
}

int main(){
    cin>>alpha;
    cin>>n;
    lietke(0,'A');
}
