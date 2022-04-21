#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,k,summa,gamma;
	cout<<"Satrlar sonini kiriting :"; cin>>m;
	cout<<"Ustunlar sonini kiriting :"; cin>>n;
	int a[m][n]={0,0};
	nishon:
	cout<<"k="; cin>>k;
	if(k>=0 and k<m)
	{
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				cout<<"a["<<i<<"]""["<<j<<"]="; cin>>a[i][j];
			}
		}
		for(int i=k; i<=k; i++)
		{
			for(int j=0; j<n; j++)
			{
				summa+=a[i][j];
				gamma*=a[i][j];
			}
		}
		cout<<"summa ="<<" "<<summa<<endl;
		cout<<"gamma ="<<" "<<gamma<<endl;
	}
	else
	{
	    goto nishon;	
	}	
}
