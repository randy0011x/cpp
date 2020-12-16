#include<iostream>
using namespace std;
void Fun( int n)
{




	 if(n!=-1)
	{
	cout<<n;
	 Fun(n-1);
	}


}
main()
{
	int n;
	cout<<"Enter n \n";
	cin>>n;
	Fun(n);
	return 0;

}
