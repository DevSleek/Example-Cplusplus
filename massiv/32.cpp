#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k;
    cout<<"n="; cin>>n;
    int a[n]={ 0 };
    for ( int i=0; i<n; i++)
    {
    	cout<<"a["<< i <<"]=";   cin>>a[i];
	}
	for ( int i=1; i<n; i++)
	{
		if ( a[i] < a[i-1] and a[i] < a[i+1] )
		{
			cout<<"lokal minimum ="<<i;
			i = (n-1) ;
		}
	}
}
