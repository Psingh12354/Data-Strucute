#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n,a[10][10],b[10][10],c[10][10];
	cout<<"enter the row and column of matrix"<<endl;
	cin>>m>>n;
	cout<<"enter the first matrix"<<endl;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		cin>>a[i][j];
	}
	cout<<"enter the second matrix"<<endl;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		cin>>b[i][j];
	}
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		
	c[i][j]=a[i][j]+b[i][j];
cout<<"sum of matrix"<<endl;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cout<<c[i][j]<<endl;
    
}
