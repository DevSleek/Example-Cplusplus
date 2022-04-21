#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int x, y=0;
	getline(cin, s);
	for(int i=0; i<s.size(); i++)
	{
		x=(int) s[i] ;
		if(x>=48 && x<=57)
		{
			y++;
		}
	}
	cout<<"satrdagi raqamlar soni :"<<y;
}
