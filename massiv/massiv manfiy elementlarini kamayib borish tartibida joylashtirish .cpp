#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int k, y = 0, m = 0, savat, a;
	cout<<"k="; cin>>k;
	int x[k] = {0},z[k] = {0};
	for (int i=0; i<k; i++)
	{
		cout<<"x["<<i<<"]="; cin>>x[i];
	}
	for (int i = 0; i < k; i++)
	{
		if (x[i] < 0)
		{
		   z[m++] = x[i];
		   y++;
		}
	}
	for (int j = 0; j < y; j++)
	{ 
	    for (int i = j + 1; i < y; i++) 
	    {
		    if (z[j] < z[i])
		    {
		       a = z[j];
			   z[j] = z[i];
			   z[i] = a;	
		    }
	    }
	}
    for (int i = 0; i < y; i++) 
    {
    	cout<<"z["<<i<<"]="<<z[i]<<endl;
	}
	return 0;
}

