#include<iostream>
using namespace std;
int a[100][100];
int count=0;
void disp(int v)
{
	int i,j;
	for(i=0;i<v;i++)
	{
	for(j=0;j<v;j++)
	{
		cout<<a[i][j]<<endl;
	}
	}
}
void edge(int u,int v)
{
	a[u][v]=1;
	a[v][u]=1;
}
int main(int argc,char *argv[])
{
	int v=4;
	edge(0,1);
	edge(0,4);
	edge(1,0);
	edge(1,2);
	edge(2,1);
	edge(2,3);
	edge(3,0);
	edge(3,2);
	disp(v);
}
