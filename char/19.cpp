#include <iostream>
#include <string>
using namespace std;
int main()
{
   string s; 
   int n=0, m=0, y, x;
   getline(cin, s);
   y=s.size();
   for(int i=0; i<s.size(); i++)
   {
	   x=(int) s[i];
	   if(48<=x && x<=57)
	   {
	   	 m++;
	   }
	   if(s[i]=='.')
	   {
	   	 n++;
	   }
   }
   if(m==y)
   {
   	 cout<<"1";
   }
   if(m+n==y)
   {
   	 cout<<"2";
   }
   else
   {
   	 cout<<"0";
   }	
}
