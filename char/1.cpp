#include <iostream>
using namespace std;
int main()
{
	char c[] = "salom";
	char *a;
	a = c;
	cout<<c<<endl;
	while(*a !='\0')
	{
		cout<<*a<<"="<<(int) *a<<endl;
		a++;
	}
	return 0;
}
