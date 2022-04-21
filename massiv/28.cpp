#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,max,k;
    cout<<"n="; cin>>n;
    int a[n]={ 0 };
    for ( int i=0; i<n; i++)
    {
    	cout<<"a["<< i <<"]=";   cin>>a[i];
	}
	k=a[0];
	for ( int i=1; i<n; i++)
	{
		if ( i % 2 == 0)
		{
			max = ( a[i] > k ) ? a[i]:k;
			k=i;
		}
	}
	cout<<max;
}
