#include <iostream>
#include <string>
using namespace std;
int main()
{
	char s;
	int x;
	cin>>s;
	x=(int) s;
	if(x>=48 && x<=57)
	{
		cout<<"digit";
	}
	else
	{
		cout<<"lotin";
	}
}
