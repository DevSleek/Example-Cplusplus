#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,z,m,x,y;
	float d,baza;
	cout<<"n="; cin>>n;
	int a[n][2]={0,0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]="; cin>>a[i][j];
		}
	}
	for(int i=0; i<n-1; i++)
	{
	   for(int j=i+1; j<n; j++)	
	   {
	  	  d=sqrt(pow((a[i][0]-a[j][0]),2)+pow((a[i][1]-a[j][1]),2));
           if(baza==0 || baza<d)
            {
             baza=d;
          	 m=a[i][0];
          	 z=a[i][1];
          	 x=a[j][0];
          	 y=a[j][1];
		    }
       }
	     
	}
	cout<<m<<" "<<z<<endl;
	cout<<x<<" "<<y<<endl;
	cout<<"ENG UZOQ MASOFA ="<<baza;
}
