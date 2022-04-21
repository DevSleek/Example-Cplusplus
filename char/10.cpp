#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s,m;
	getline(cin, s);
	for(int i=s.size(); i>=0; i--)
	{
	  cout<<s[i];
	}
}
