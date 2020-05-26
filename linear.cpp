#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,search;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the value"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element to search"<<endl;
	cin>>search;
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			cout<<"element found"<<i+1<<endl;
			break;
		}
	}
	if(i==n)
	{
		cout<<"element not found"<<endl;
	}
}
