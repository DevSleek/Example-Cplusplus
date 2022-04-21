#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k,l,sum=0;
	cout << "n="; cin >> n;
	cout << "k="; cin >> k;
	cout << "l="; cin >> l;
	int a[n] = { 0 };
	for ( int i=0; i<n; i++)
	{   
		cout <<"a["<< i <<"]="; 
		cin >>a[i];
	}
	for (int i=(k+1); i<l; i++)
	{
	    cout<<"a["<< i <<"]="<< a[i]<<endl;	
	}
	for ( int i=(k+1); i<l; i++)
	{
	    sum+=a[i];	
	}
cout<<sum;
}
