#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"n="; cin>>n;
	int a[n]={0},b[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		cout<<"b["<<i<<"]=";
		cin>>b[i];
	}
	for(int i=0; i<n; i++)
	{
	    cout<<"a["<<i<<"]="<<b[i]<<endl;
		cout<<"b["<<i<<"]="<<a[i]<<endl;	
	}
	getch();
}
