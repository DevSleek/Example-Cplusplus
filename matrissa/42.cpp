#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,x,savat;
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
		savat=a[i][0];
		x=0;
		for(int j=1; j<n; j++)
		{
			if(savat<a[i][j])
			{
				savat=a[i][j];
				x++;
			}
		}
	}
	cout<<"Elementlar soni o'sish tartibida kiritilgan satrlar soni :"<<" "<<x;
}
