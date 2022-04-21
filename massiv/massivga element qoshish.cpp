#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,index,x,savat,m;
	cout<<"n="; cin>>n;
	cout<<"Yangi element="; cin>>x;
	cout<<"Qaysi index qillib chiqar sen="; cin>>index;
	int a[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	n++;
	m=a[index];
	for(int i=index+1; i<n; i++)
	{   
	    	savat=m;
	    	m=a[i];
	    	a[i]=savat;
	}
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<"\n";
	}
	return 0;
}
