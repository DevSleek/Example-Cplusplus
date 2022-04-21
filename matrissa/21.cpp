#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,sum,x=0;
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
		sum=0;
		for(int j=2*x+1; j<n; j+=2)
		{
		    sum+=a[i][j];
			x++;	
		}
		cout<<sum/x<<endl;
	}
}
