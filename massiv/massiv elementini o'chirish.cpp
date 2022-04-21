#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Massiv hajmini kiriting:"; cin>>n;
	int a[n]={0},pos;
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]=";   cin>>a[i];
	}
	cout<<"O'chirilishi kerak boo'lgan element index :"; cin>>pos;
	for(int i=pos; i<n; i++)
	{
		a[i]=a[i+1];
	}
	for(int i=0; i<n-1; i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<" ";
	}
}
