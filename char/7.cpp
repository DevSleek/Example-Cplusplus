#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string s;
	int k;
	getline(cin, s);
	k=s.size();
	cout<<(int) s[0]<<endl;
	cout<<(int) s[k-1];
	return 0;
}
