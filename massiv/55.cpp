#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,max=0;
	cout<<"n="; cin>>n;
	int a[n]={0},b[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		if(i%2==1)
		{
			cout<<"b["<<i<<"]="<<a[i]<<"\n";
			max+=1;
		}
	}
	cout<<"Elementlar soni ="<<" "<<max;
}
