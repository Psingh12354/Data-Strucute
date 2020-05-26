#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *left;
		Node *right;
};
void create(Node *n)
{
	if(n->left)
	create(n->left);
	cout<<n->data<<endl;
	if(n->right)
	create(n->right);
}
int main()
{
	Node* A=new Node();
	Node* B=new Node();
	Node* C=new Node();
	A->data=1;
	A->left=B;
	A->right=C;
	B->data=2;
	C->data=3;
	create(A);
}
