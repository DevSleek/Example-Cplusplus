#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n; 
	string s,a;
	cout<<"n="; cin>>n;
	cout<<"satrni kiriting :"; cin>>s;
	a.append(n, '*');
	for(int i=0; i<s.size(); i++)
	{
	   cout<<s[i]+a; 
	}
}
