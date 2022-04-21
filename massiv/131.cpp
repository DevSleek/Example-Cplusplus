#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x,y,m,z;
	float d,savat;
	cout<<"n="; cin>>n;
	cout<<"x="; cin>>x;
	cout<<"y="; cin>>y;
	int b[2]={x,y}, a[n][2]={0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]="; cin>>a[i][j];
		}
	}
	savat=sqrt( pow(( x-a[0][0 ]),2)+pow(( y-a[0][1]),2 ) );
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<2; j++)
		{
			d=sqrt( pow(( x-a[i][j]),2)+pow(( y-a[i][j+1]),2 ) );
			
		    if(savat>d)
		    {
			   savat=d;
			   m=a[i][j];
			   z=a[i][j+1];
		    }
		
		}
	}
	cout<<m<<" "<<z<<endl;
	cout<<savat;
}
