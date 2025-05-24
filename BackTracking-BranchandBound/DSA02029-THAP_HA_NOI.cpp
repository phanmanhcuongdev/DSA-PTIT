#include<iostream>

using namespace std;

void HaNoiTower(int n,char from,char to,char aux){
    if(n==1){
        cout<<from<<" -> "<<to<<endl;
        return;
    }
    HaNoiTower(n-1,from,aux,to);
    cout<<from<<" -> "<<to<<endl;
    HaNoiTower(n-1,aux,to,from);
}

int main(){
    int n;
    cin>>n;
    HaNoiTower(n,'A','C','B');
}
