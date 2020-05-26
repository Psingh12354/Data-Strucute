#include<iostream>
using namespace std;
int main()
{
int a[100],i,n,search,beg,mid,last;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter the value in array"<<endl;
for(i=0;i<n;i++)
{
	cin>>a[i];
}	
cout<<"enter the number to search : "<<endl;
cin>>search;
beg=0;
last=n-1;
mid=(beg+last)/2;
while(beg<=last)
{
	if(a[mid]<search)
	{
		beg=mid+1;
	}
	else
	if(a[mid]==search)
	{
		cout<<"element found at give location:"<<mid+1<<endl;
		break;
	}
	else
	if(a[mid]>search)
	{
		last=n-1;
	}
	mid=(beg+last)/2;
}
if(beg>last)
{
	cout<<"element cannot found"<<search<<endl;
}
}
