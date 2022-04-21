#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k,baza,max;
	nishon :
	cout << "n="; cin >> n;
	if ( n%2!=0)
	goto nishon;
	int a[n] = { 0 };
	for ( int i=0; i<n; i++)
	{
		cout<<"a["<< i <<"]="; cin>>a[i];
	}
	for ( int i=0; i<n; i+=2)
	{
		if ( a[i]%2==0 and a[i+1]%2!=0)
		{
			k = 0;
		}
		else
		{ // notogri elementni topish
			if ( a[i]%2==1 ) // i => TOQ ____ k = index
			{
				baza=i;
			}
			if ( a[i+1]%2==0 ) // i+1 => JUFT ____ k = index
			{
			    baza=(i+1);	
			}
		}	
	}
	max = ( baza==0 ) ? k:baza;
	cout<<max;	
}
