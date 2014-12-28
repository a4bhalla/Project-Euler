#include <iostream>

using namespace std;
int main()
{
	long int start_number=0;
	long int chain_length=0;
	long int x=1;
	for (; x<=1000000;x++)
	{
		long int n=x;
		long int y=0;
		for (;n!=1;y++)
		{
			if (n%2==0)
			{
				n=n/2;
			}
			
			else
			{
				n=3*n+1;
			}
		}
		
		if (y>chain_length)
		{
			start_number=x;
			chain_length=y;
		}
	}
	
	cout<<start_number;	
}