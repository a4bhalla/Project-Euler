#include <iostream>
#include <cmath>

using namespace std;

int prime (int n);

int main()
{
	int count=0, record=0;
	for (int x=1;count<=10001;x++)
	{
		if (prime (x)==1)
		{
			count=count+1;
			record=x;
		}
	}
	
	cout<<record;
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