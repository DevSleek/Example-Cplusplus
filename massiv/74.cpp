#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,k,x=0;
	cout<<"n="; cin>>n;
	int a[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	k=a[0];
	m=a[0];
	for(int i=0; i<n; i++)
	{
		if(k<a[i])
		{
			k=i;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(m>a[i])
		{
			m=i;
		}
	}
	for(int i=0; i<=m; i++)
	{
		cout<<"a["<<i<<"]="<<a[i];
	}
	for(int i=(m+1); i<k; i++)
	{
	    cout<<"a["<<i<<"]="<<x;	
	}
	for(int i=k; i<n; i++)
	{
	    cout<<"a["<<i<<"]="<<a[i];	
	}
}
	
