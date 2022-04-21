#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,k1,k2,x;
	cout<<"Satrlar sonini kiriting :"; cin>>m;
	cout<<"Ustunlar sonini kiriting :"; cin>>n;
	int a[m][n]={0,0};
	nishon:
	cout<<"k1="; cin>>k1;
	cout<<"k2="; cin>>k2;
	if(0<= k1 <k2 and k2 < m)
	{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]="; cin>>a[i][j];
		}
	}
	
		for(int j=0; j<n; j++)
		{
			x=a[k1][j];
			a[k1][j]=a[k2][j];
			a[k2][j]=x;
		}
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	}
	else
	{
		goto nishon;
	}
}
	
