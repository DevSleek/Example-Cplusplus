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
	for(int l=0; l<1; l++)
	{	
	min=a[0];
	max = a[0];
	for(int j=1; j<n; j++)
	{
		if( min > a[j] )
		{
			min=j;
			baza1=a[j];
		}
		
	}
	for(int i=1; i<n; i++)
	{
		if( max < a[i] )
		{
			max = i;
			baza2=a[i];
		}
		
	}
	   a[max]=baza1;
	   a[min]=baza2;
	}
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<"\n";
	}
}
