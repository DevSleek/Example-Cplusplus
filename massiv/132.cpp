#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,z,m;
	float savat,d;
	cout<<"n="; cin>>n;
	int b[2]={0,0}, a[n][2]={0,0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]="; cin>>a[i][j];
		}
	}
	for(int i=1; i<n; i++)
	{   
		if(a[i][0]<0 && a[i][1]>0)
		{	
	        savat=sqrt( pow(( 0-a[0][0 ]),2)+pow(( 0-a[0][1]),2 ) );
			d=sqrt( pow(( 0-a[i][0]),2)+pow(( 0-a[i][1]),2 ) );
			
		    if(savat<d)
		    {
			   savat=d;
			   m=a[i][0];
			   z=a[i][1];
		    }
		}
		else if( a[i][0]>0 && a[i][1]<0)	
		{
			cout<<"KIRITMADIZ YAXSHILAB QARAN AKA";
		}
	}
	cout<<m<<" "<<z<<endl;
	cout<<savat;
}
