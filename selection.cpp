#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,*a,i,j,min,k=0,temp,l=0;
	cout<<"Enter n \n";
	cin>>n;
	a = (int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<n;i++)
		{
			k=i;
			min = a[k];
			for(j=i+1;j<n;j++)
			{
	
				if(min>a[j])
				{
					min = a[j];
					k=j;
			
				}	
			
			}
		temp = a[i];
		a[i] = min;
		a[k] = temp;
	
		}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	
}
