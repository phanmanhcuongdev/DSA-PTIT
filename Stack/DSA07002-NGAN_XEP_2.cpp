#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
	
	Node(int value):data(value),next(nullptr){};
};

class Program{
	private:
		Node* top;
	public:
		Program() :top(nullptr){};
		void push(int x){
			Node* newNode=new Node(x);
			newNode->next=top;
			top=newNode;
		}
		
		void pop(){
			if(top!=nullptr){
				Node* temp=top;
				top=top->next;
				delete temp;
			}
		}
	
		void print(){
			if(top!=nullptr){
				cout<<top->data<<endl;
			}else{
				cout<<"NONE"<<endl;
			}
		}
};

int main(){
	int Q;
    cin >> Q;
    cin.ignore();

    Program stack;
    string query;
    
    while (Q--) {
        getline(cin, query);
        if (query.substr(0, 4) == "PUSH") {
            int x = stoi(query.substr(5));
            stack.push(x);
        } else if (query == "POP") {
            stack.pop();
        } else if (query == "PRINT") {
            stack.print();
        }
    }

    return 0;
}
