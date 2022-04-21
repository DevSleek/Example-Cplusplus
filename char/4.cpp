#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cout<<"n="; cin>>n;
	for(int i=65; i<65+n; i++)
	{
		cout<<(char) i <<endl;
	}
}
