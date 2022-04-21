#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	int n,m,sum1,sum2,x=-1,y=5;
	cout<<"n="; cin>>n;
	cout<<"m="; cin>>m;
	int a[n][m]={0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			a[i][j]=rand()%y+x;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]<0)
			{   
				sum1+=a[i][j];
			}
			else 
			{
				sum2+=a[i][j];
			}
		}
	}
	cout<<"Manfiy elementlar yig'indisi="<<sum1<<"\n";
	cout<<"Musbat elementlay yig'indisi="<<sum2;
}
