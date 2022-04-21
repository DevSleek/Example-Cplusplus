#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,baza,min,m,k;
    cout<<"n="; cin>>n;
    int a[n]={ 0 };
    for ( int i=0; i<n; i++)
    {
    	cout<<"a["<< i <<"]=" ;   cin>>a[i] ;
    }
	for ( int i=0; i<n; i++)
	{
		m = a[i] + a[i+1] ;
		if ( m > k )
		{
			k = m;
			baza = a[i] ;
			min = a[i+1] ;
		}
	}
cout<< baza <<" "<< min ;	
}
