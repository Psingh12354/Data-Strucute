#include<iostream>
using namespace std;
void tower(int a,char from,char aux,char to)
{
	if(a==1)
	{
		cout<<"move"<<from<<"to"<<to<<endl;
		return;
	}
	else
	tower(a-1,from,to,aux);
	cout<<"move"<<a<<"from"<<from<<"to"<<to;
	tower(a-1,from,to,aux);
}
int main()
{
	int n;
	cout<<"tower of hanoi"<<endl;
	cout<<"enter the disc number"<<endl;
	cin>>n;
	tower(n,'A','B','C');
}
