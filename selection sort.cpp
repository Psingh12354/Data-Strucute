 #include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,temp,n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{   cout<<"enter the element"<<endl;
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		   if(a[i]>a[j])
		   {
		   	temp=a[i];
		   	a[i]=a[j];
		   	a[j]=temp;
		   }
		}
	}
	cout<<"after sorting"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
