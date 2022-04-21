#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,max;
	cout<<"n="; cin>>n;
	int a[n]={0},b[n]={0},c[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
		cout<<"b["<<i<<"]="; cin>>b[i];
	}
	for(int i=0; i<n; i++)
	{
	    max=(a[i]>b[i]) ? a[i]:b[i];
		cout<<"c["<<i<<"]="<<max<<endl;	
	}
}
