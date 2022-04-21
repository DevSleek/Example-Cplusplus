#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k,l,sum1=0,sum2=0,m;
	cout << "n="; cin >> n;
	cout << "k="; cin >> k;
	cout << "l="; cin >> l;
	int a[n] = { 0 };
	for ( int i=0; i<n; i++)
	{   
		cout <<"a["<< i <<"]="; 
		cin >>a[i];
	}
	for (int i=0; i<k; i++)
	{
	    cout<<"a["<< i <<"]="<< a[i]<<endl;	
	}
	for (int i=0; i<k; i++)
	{
		sum1+=a[i];
	}
	for ( int i=(l+1); i<n; i++)
	{
	    cout<<"a["<< i <<"]="<< a[i]<<endl;	
	}
	for (int i=(l+1); i<n; i++)
	{
		sum2+=a[i];
	}
	m=sum1+sum2;
	cout<<m;

}
