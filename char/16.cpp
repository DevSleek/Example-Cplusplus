#include <iostream>
#include <cctype>
#include <string>
using namespace std; 
int main()
{ 
    string s , m ;
    getline(cin, s);  
    for (int i = 0; i < s.size(); i++)
    {
    	m = tolower(s[i]); 
		cout << m;
	}
}
