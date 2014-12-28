#include <iostream>
#include <cmath>

using namespace std;


int prime (int n);
int main()
{
	long int sum=0;
	for (long long int x=2;x<=2000000;x++)
	{
		if (prime(x)==1)
		{
			sum=sum+x;
		}
	}	
	
	cout<<sum;
}




// we make a function that returns 0 if a number is not a prime and 1 if it is a prime

int prime (int n)
{
	for (int x=2;x<=pow(n,0.5);x++)
	{
		if (n%x==0)
		{
			return 0;
		}
	}
	
	return 1;
}