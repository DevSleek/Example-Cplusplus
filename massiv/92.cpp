#include <iostream>
using namespace std;
int main()
{
	int n,x,savat,y=0;
	cout<<"n="; cin>>n;
	int arr[n]={0};
	for(int i=0; i<n; i++)
	{
		cout<<"arr["<<i<<"]="; cin>>arr[i];
	}
	for(int j=0; j<n; j++)
	{
		if(arr[j]%2==0)
		{
			for(int i=j; i<n; i++)
	        {
		        savat=arr[i];
		        arr[i]=arr[i-1];
		        arr[i-1]=savat;
	        }
	        n--;
	        y++;
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<"arr["<<i<<"]="<<arr[i]<<endl;
	}
	cout<<"Hosil bo'lgan massiv elementlar soni:"<<y;
}
