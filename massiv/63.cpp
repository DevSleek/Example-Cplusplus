#include <iostream>
#include <math.h>
using namespace std;
int main()
{ 
   int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},c[10]={0},A=0;
    for(int i=0; i<5; i++)
    {
      c[i]=a[i];	
	}
	for(int j=5; j<10; j++)
    {
      c[j]=b[ j-5 ];	
	}
   for( int i=0; i<10; i++)
   {
   	cout<<c[i];
   }
}
