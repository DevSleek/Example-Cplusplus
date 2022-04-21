#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,m,k;
	cout<<"Satrlar sonini kiriting="; cin>>m;
	cout<<"ustunlar sonini kiriting="; cin>>n;
	int a[m][n]={0,0};
	nishon:
	cout<<"k="; cin>>k;
	if(k>=0 and k<m)
	{
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]="; cin>>a[i][j];
			cout<<"\n";
		}
	}
	for(int i=k; i<=k; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]="<<a[i][j]<<"\t";
		}
	}
		
	}
	else
	{
		goto nishon;
	}

}
