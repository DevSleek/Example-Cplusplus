#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,m,k,baza1,baza2;
    cout<<"n="; 
	cin>>n;
    int a[n]={ 0 };
    for ( int i=0; i<n; i++)
    {
	   cout<<"a["<< i <<"]=" ; 
	   cin >> a[i] ;
    }
    m = abs( a[0] - a[1] ) ;
    for ( int i=1; i<n; i++)
    {
    	k = abs( a[i] - a[i+1] );
    	if ( k < m )
    	{
    		baza1 = i ;
    		baza2 = ( i+1 ) ;
		}
	}
	cout<< baza1 <<" "<<baza2 ;
}
