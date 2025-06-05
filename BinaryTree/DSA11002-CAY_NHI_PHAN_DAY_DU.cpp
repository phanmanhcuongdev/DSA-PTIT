#include<iostream>
#include<cstring>
#include<vector>
#include<string>
#include<stack>

using namespace std;

struct Node{
	string data;
	Node* left;
	Node* right;
	Node(string x):data(x),left(nullptr),right(nullptr){}
};
/*0
12
3456
7891011121314*/
Node* treebuilder(int i,int n,const vector<string> &s)
{
	if(i>=n) return nullptr;
	Node* root=new Node(s[i]);
	root->left=treebuilder(i*2+1,n,s);
	root->right=treebuilder(i*2+2,n,s);
	return root;
}


void printbinarytree(Node* root){
	if(!root) return;
	printbinarytree(root->left);
	cout<<root->data;
	printbinarytree(root->right);
}

int eval(Node* root){
	if(!root) return 0;
	if(!root->left&&!root->right)
	{
		return stoi(root->data);
	}
	int left_val=eval(root->left);
	int right_val=eval(root->right);
	
	if(root->data=="+") return left_val+right_val;
	if(root->data=="-") return left_val-right_val;
	if(root->data=="*") return left_val*right_val;
	if(root->data=="/") return left_val/right_val;
	return 0;
}

void solve(){
	int n;
	cin>>n;
	vector<string> s(n);
	for(int i=0;i<n;i++) cin>>s[i];
	Node* root=treebuilder(0,n,s);
	//printbinarytree(root);
	cout<<eval(root);
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}
