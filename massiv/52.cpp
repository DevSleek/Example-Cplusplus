#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,k,m;
	cout<<"n="; cin>>n;
	int a[n]={0},b[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		if(a[i]<5)
		{
			k=2*a[i];
			cout<<"b["<<i<<"]="<<k<<endl;
		}
		else
		{
			m=a[i]/2;
			cout<<"b["<<i<<"]="<<m<<endl;
		}
	}
	getch();
}
