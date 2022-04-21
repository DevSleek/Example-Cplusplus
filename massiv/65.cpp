#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	int n,k;
	cout<<"n="; cin>>n;
	nishon:
	cout<<"k="; cin>>k;
	if(1<=k and n>=k)
	{
		int a[n]={0};
		for(int i=0; i<n; i++)
		{
			cout<<"a["<<i<<"]="; cin>>a[i];
		}
		for(int i=0; i<n; i++)
		{
			a[i]+=a[k];
			cout<<"a["<<i<<"]="<<a[i]<<"\n";
		}	
	}
	goto nishon ;
	getch() ;
}
