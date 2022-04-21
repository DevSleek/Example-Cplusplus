#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,k,min,max,baza1,baza2;
	cout<<"n="; cin>>n;
	int a[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
	   if(i<(n/2))
		{
		  k=a[(n/2)+i];	
		  cout<<"a["<<i<<"]="<<k<<endl;	
		}
		else
		{
			m=a[i-(n/2)];
			cout<<"a["<<i<<"]="<<m<<endl;
		}
	}
}
