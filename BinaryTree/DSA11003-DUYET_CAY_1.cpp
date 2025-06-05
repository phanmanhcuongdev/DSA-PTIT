#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> inorder,preorder;
unordered_map<int,int> inorderIndex;

vector<int> buildPostorder(int inStart,int inEnd,int& preIndex){
	if (inStart>inEnd) return {};
	int root=preorder[preIndex++];
	int rootPos=inorderIndex[root];
	vector<int> left=buildPostorder(inStart,rootPos-1,preIndex);
	vector<int> right=buildPostorder(rootPos+1,inEnd,preIndex);
	vector<int> result;
	result.insert(result.end(),left.begin(),left.end());
	result.insert(result.end(),right.begin(),right.end());
	result.push_back(root);
	return result;
}

void solve(){
	int n;
	cin>>n;
	inorder.resize(n);
	preorder.resize(n);
	for(int i=0;i<n;i++) {
		cin>>inorder[i];
		inorderIndex[inorder[i]]=i;
	}
	for(int i=0;i<n;i++) {
		cin>>preorder[i];
	}
	int preIndex=0;
	vector<int> result=buildPostorder(0,n-1,preIndex);
	for(int u:result) cout<<u<<" ";
	cout<<"\n";
}

int main(){
	int t;cin>>t;while(t--) solve();
	return 0;
}
