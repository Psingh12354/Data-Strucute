#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,temp;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the value in array"<<endl;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	cout<<"sorting array"<<endl;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
	
	while((temp<a[j])&&(j>=0))
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=temp;
}
	cout<<"after sorting"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
