#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

struct Node{
	char data;
	Node* left;
	Node* right;
	Node(char x):data(x),left(NULL),right(NULL){}
};

Node* buildtree(string input)
{
	stack<Node*> st;
	for(char c:input)
	{
		if(c=='+'||c=='-'||c=='*'||c=='/')
		{
			Node *right=st.top();st.pop();
			Node *left=st.top();st.pop();
			Node* op=new Node(c);
			op->left=left;
			op->right=right;
			st.push(op);
		}
		else
		{
			st.push(new Node(c));
		}
	}
	return st.top();
}

void printInfix(Node* root) {
    if (!root) return;
	
    printInfix(root->left);
    cout << root->data;
    printInfix(root->right);
}

void solve(){
	string input;
	cin>>input;
	Node* root=buildtree(input);
	printInfix(root);
	cout<<endl;
}

int main()
{
	int t;cin>>t;while(t--) solve();
	return 0;
}
