#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,sum,savat;
	float y;
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
	    savat=0;
	    sum=0;
		for(int j=0; j<n; j++)
		{
			sum+=a[i][j];
		}
		y=sum/n;
		for(int k=0; k<n; k++)
		{
			if(y>a[i][k])
			{
				savat++;
			}
		}
		cout<<i<<"-satrning O' A kichik bo'lgan elementlar soni ="<<" "<<savat<<endl;
	}
}
