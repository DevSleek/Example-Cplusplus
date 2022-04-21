#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n1,n2,x,y,m,z;
	float d,baza;
	cout<<"n1="; cin>>n1;
	cout<<"n2="; cin>>n2;
	int a[n1][2]={0,0},b[n2][2]={0,0};
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]="; cin>>a[i][j];
		}
	}
	for(int i=0; i<n2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"b["<<i<<"]""["<<j<<"]="; cin>>b[i][j];
		}
	}
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n2; j++)
		{
			d=sqrt(pow((a[i][0]-b[j][0]),2)+pow((a[i][1]-b[j][1]),2));
			if(baza==0 || baza<d)
			{
				baza=d;
				x=a[i][0];
			    y=a[i][1];
			    m=b[j][0];
			    z=b[j][1];
			}
		}
	}
	cout<<"a("<<x<<" ; "<<y<<")"<<endl;
	cout<<"b("<<m<<" ; "<<z<<")"<<endl;
	cout<<baza;
}
	
