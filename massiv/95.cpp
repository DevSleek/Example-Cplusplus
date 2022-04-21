#include <iostream>
using namespace std;
int main()
{
	int n,x=0,y=0;
	cout<<"n="; cin>>n;
	int arr[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"arr["<<i<<"]="; cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		if(arr[i]==arr[i+1])
		{
			arr[i+1]=arr[i+1+1];
		}
	}
	for(int i=0; i<n-1; i++)
	{
		cout<<"arr["<<i<<"]="<<arr[i]<<endl;
	}
}
	
