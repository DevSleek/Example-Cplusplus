#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,m,d,x;
	cout<<"Satrlar sonini kiriting="; cin>>m;
	cout<<"ustunlar sonini kiriting="; cin>>n;
	cout<<"d="; cin>>d;
	int a[m][n]={0,0},b[m]={0};
	for(int i=0; i<m; i++)
	{
		cout<<"b["<<i<<"]="; cin>>b[i];
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]="<<b[i]<<endl;
			b[i]+=d;
		}
	}

}
