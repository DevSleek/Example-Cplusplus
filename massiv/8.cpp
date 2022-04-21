#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n,k=0,DB;
  cout << "n="; cin >> n;
  int a[n] = { 0 },b[n] = { 0 };
  for ( int i=0; i<n; i++)
  {
    cout <<"a["<< i <<"]="; cin >> a[i];
  }
    for ( int j=0; j<n; j++) 
  { 
    if ( a[j] % 2 == 1 )
    {
       b[k++]= a[j] ;   
    }  
    }
    for ( int i=0; i<k-1; i++)
    { 
    for( int j=i+1; j < k; j++ )
    { 
      if ( b[i] > b[j])
      {
        
        DB=b[i];
        b[i]=b[j];
        b[j]=DB;
      }
    }  
  }
    for ( int j=0; j<k; j++)
    {
      cout <<b[j]<<endl;
    }
}
