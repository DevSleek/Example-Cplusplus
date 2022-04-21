#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,savat;
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
		for(int j=0; j<n; j++)
		{
		    if(a[i][j]%2==0)
		    {
		    	if(savat==0 || savat<i)
		    	{
		    		savat=i;
				}
			}
		}
	}
	cout<<savat;
}
