#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,savat;
	cout<<"n="; cin>>n;
	int a[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		if(a[i]<a[i-1])
		{
			savat=a[i];
			a[i]=a[i-1];
			a[i-1]=savat;
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="<<a[i];
	}
}
