#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,x,y;
	cout<<"Satrlar sonini kiriting :"; cin>>m;
	cout<<"Ustunlar sonini kiriting :"; cin>>n;
	int a[m][n]={0,0};
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]="; cin>>a[i][j];
		}
	}
	for(int i=0; i<m; i++)
	{  
	    x=0;
	    y=0;
		for(int j=0; j<n; j++)
		{
			if(a[i][j]>0)
			{
				x++;
			}
			if(a[i][j]<0)
			{
				y++;
			}
		}
		if(x==y)
		{
			cout<<i<<endl;
		}
	}
}
