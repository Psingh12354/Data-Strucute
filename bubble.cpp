#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,temp,n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the element in array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])          //a[i]>a[j] for ascending order for descending a[i]<a[j]
			{
				temp=a[i];         // take third variable temp eg 4 is given to temp 
				a[i]=a[j];         // a[j]=3 whose value is compare with 4 and swap 4 and 3 in 3 and 4
				a[j]=temp;
			}

		}
	}
	cout<<"element after sorting"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
