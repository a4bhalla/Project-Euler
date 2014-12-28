#include <iostream>

using namespace std;

int main() 
{
	int largest_factor=0;
	int x=2;
	for(long long int n=600851475143; n!=1;)
	{
		if(n%x==0)
			{
				n=n/x;
				if(x>largest_factor)
				{
					largest_factor=x;
				};
			}
		else
		{
			x++;
		}
	}
	
	cout<<" "<<largest_factor;
	
}

