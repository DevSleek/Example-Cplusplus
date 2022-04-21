#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,m;
	cout<<"Satrlar sonini kiriting="; cin>>m;
	cout<<"ustunlar sonini kiriting="; cin>>n;
	int a[m][n]={0,0};
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]="; cin>>a[i][j];
		}
	}
	for(int i=0; i<m; i++)
	{
		if(i%2==0)
		{
			for(int j=0; j<n; j++)
			{
				cout<<"a["<<i<<"]""["<<j<<"]="<<a[i][j]<<endl;
			}
		}
	}
}
