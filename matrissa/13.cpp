#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m;
	cout<<"Satrlar sonini kiriting :"; cin>>m;
	cout<<"Ustunlar sonini kiriting :"<<m<<endl;
	int a[m][m]={0,0};
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]="; cin>>a[i][j];
		}
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<m-i; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<" --> ";
		for(int k=i+1; k<m; k++)
		{
			cout<<a[k][(m-1)-i]<<" ";
		}
		cout<<endl;
	}
}
