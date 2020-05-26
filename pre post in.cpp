#include<iostream>
using namespace std;
struct Node{
 int data;
 Node *left;
 Node *right;
};
void inorder(struct Node *root)
{
 if(root==NULL)
 return;
 inorder(root->left);
 cout<<root->data<<endl;
 inorder(root->right);
 
} 
void preorder(struct Node *root)
{
 if(root==NULL)
 return;
 cout<<root->data<<endl;
 preorder(root->left);
 preorder(root->right);
 
}
void postorder(struct Node *root)
{
 if(root==NULL)
 return;
 postorder(root->left);
 postorder(root->right);
 cout<<root->data<<endl;
 
}
struct Node* createNode(int v)
{
 struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
 newNode->data=v;
 newNode->left=NULL;
 newNode->right=NULL;
 return newNode;
}
struct Node* insertleft(Node *root,int v)
{
 root->left=createNode(v);
// return root->left;
}
struct Node* insertright(Node *root,int v)
{
 root->right=createNode(v);
// return root->right;
}
int main()
{
  Node *root=new Node();
    root->data=15;
    insertleft(root,10);
    insertright(root,20);
    insertleft(root->left,5); 
 insertleft(root->right,8);
 insertright(root->left,18);
 insertright(root->right,25);
 cout<<"INORDER"<<endl;
 inorder(root);
 cout<<"PREORDER"<<endl;
 preorder(root);
 cout<<"POSTORDER"<<endl;
 postorder(root);
}
