#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,max,min,minIndex,maxIndex;
	cout<<"n="; cin>>n;
	int a[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	max=a[0];
	min=a[0];
	for(int i=1; i<n; i++)
	{
		if(max<a[i])
		{
			max=a[i];
			maxIndex=i;
		}
	}
	cout<<"max="<<max<<"\t";
	for(int j=1; j<n; j++)
	{
		if(min>a[j])
		{
			min=a[j];
			minIndex=j;
		}
	}
	cout<<"min="<<min<<"\n";
	
	int c;
	c = a[maxIndex];
	a[maxIndex]=a[minIndex];
	a[minIndex]=c;
	
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}
	
