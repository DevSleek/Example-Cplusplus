#include <iostream>
using namespace std;
int main()
{
	int n,k,savat;
	cout<<"n="; cin>>n;
	cout<<"O'chiriladigan element index="; cin>>k;
	int a[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; cin>>a[i];
		cout<<endl;
	}
	for(int i=k+1; i<n; i++)
	{
		savat=a[i];
		a[i]=a[i-1];
		a[i-1]=savat;
	}
	for(int i=0; i<n-1; i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<"\t";
	}	
}
