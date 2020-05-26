#include<iostream>
using namespace std;
int stack[100],i,top,value=0,n;
void push(int x)
{
	if(top>n-1)
	{
		cout<<"overflow"<<endl;
		return;
	}
	top=top+1;
	stack[top]=item;

}
void pop()
{
	if(top==0)
	{
		cout<<"empty stack"<<endl;
		return;
	}

	top--;
}
void display()
{
	if(top>=0)
	{
		cout<<"element found stack not empty"<<endl;
		for(i=top;i>=0;i--)
		cout<<stack[i];
	}
	else
	cout<<"stack empty"<<endl;
}
int main()
{
	int value=0;
	top=-1;
	cin>>n;
	push(56);
	push(6);
	push(9);
	push(5);
	pop();
	display();
}

