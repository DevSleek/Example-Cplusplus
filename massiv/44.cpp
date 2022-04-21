#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,m,k;
    cout<<"n="; 
	cin>>n;
    int a[n]={ 0 };
    for ( int i=0; i<n; i++)
    {
	   cout<<"a["<< i <<"]=" ; 
	   cin >> a[i] ;
    }
    for ( int i=0; i<n; i++)
    {
    	for ( int j=1; j<n; j++)
    	{  
    	  if ( a[i] == a[j] and i != j )
			{
			   m = j ;
			   k = i ; 	  
			} 	
		}
	}
	cout<< m <<" "<< k ;  
}
