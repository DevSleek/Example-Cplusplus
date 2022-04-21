#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m,k,x=0;
	cout<<"n="; cin>>n;
	int a[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	for(int i=1; i<n; i++)
	{
		if(a[i]>a[i-1] and a[i]>a[i+1])
		{
			cout<<"a["<<i<<"]="<<x;
		}
	}
}
