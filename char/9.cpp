#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	a.append(b);
	cout<<a;
}
