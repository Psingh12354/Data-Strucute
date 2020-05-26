#include<iostream>
using namespace std;
class Node
{public:
	int data;
	Node *next;
};
void push(Node **head_ref,int new_data)
{
Node *new_node=new Node();
new_node->data=new_data;
new_node->next=(*head_ref);
(*head_ref)=new_node;
}
void dele(Node **head_ref,int item)
{
	Node *temp = *head_ref;
	Node *prev = *head_ref;
	while(temp->data!=item &&temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	
	prev->next=temp->next;
	delete(temp);

}
void print(Node *n)
{
	while(n!=NULL)
	{
	cout<<n->data<<endl;
	
	n=n->next;
	}
}
int main()
{
	Node *head=new Node();
	 push(&head,58);
    push(&head,79);
    push(&head,57);
    push(&head,78);
    print(head);
    dele(&head,57);
    print(head);
    
}
