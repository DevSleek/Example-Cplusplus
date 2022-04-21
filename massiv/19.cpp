#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k,baza;
	cout << "n="; cin >> n;
	int a[n] = { 0 };
	for ( int i=0; i<n; i++)
	{   
		cout <<"a["<< i <<"]="; 
		cin >>a[i];
	}
	for (int i=0; i<n; i++)
	{
		if ( a[0] < a[i] and a[i] < a[n-1] )
		{  
		   baza = a[i]; 
		}
	}
	    cout<<baza;
	    return 0;
}
