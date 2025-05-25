#include<iostream>
#include<vector>

using namespace std;

class Graph
{
private:
int n;	
vector<vector<int>> MaTrix;
vector<vector<int>> result;
public:
Graph(int n,const vector<vector<int>>& MaTrix){
	this->n=n;
	this->MaTrix=MaTrix;
}
void chuyensangdanhsachke(){
	for(int i=0;i<n;i++)
	{
		vector<int> temp;
		for(int j=0;j<n;j++)
		{
			if(MaTrix[i][j]==1) temp.push_back(j+1);
		}
		result.push_back(temp);
	}
}
void display()
{
	for(auto& x:result)
	{
		for(auto y:x)
		{
			cout<<y<<" ";
		}
		cout<<endl;
	}
}
};

int main()
{
	int n;
	cin>>n;
	vector<vector<int>> MaTrix;
	for(int i=0;i<n;i++)
	{
		vector<int> temp;
		for(int j=0;j<n;j++)
		{
			int x;
			cin>>x;
			temp.push_back(x);
		}
		MaTrix.push_back(temp);
	}
	Graph run(n,MaTrix);
	run.chuyensangdanhsachke();
	run.display();
	return 0;
}
