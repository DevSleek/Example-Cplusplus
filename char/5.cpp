#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	a:
	cout<<"n="; cin>>n;
	if(n>=1 and n<26)
	{
		
	for(int i=122; i>=122-n; i--)
	{
		cout<<(char) i <<endl;
	}
		
	}
	else
	{
		goto a;
	}
}
