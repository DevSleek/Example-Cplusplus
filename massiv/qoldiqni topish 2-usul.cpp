#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,a,q;
	cout<<"n="; cin>>n;
	cout<<"a="; cin>>a;
	while(n-a>=a)
	{
		q=n-a;
		n=q;
	}
	cout<<(q-a);
}
