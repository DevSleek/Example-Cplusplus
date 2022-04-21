#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,savat,x;
	cout<<"n="; cin>>n;
	int a[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	savat=a[0]; a[0]=0;
	for(int j=1; j<n; j++)
	{
		m=savat;
		savat=a[j];
		a[j]=m;	
	} 
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
