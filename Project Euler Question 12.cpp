#include <iostream>

using namespace std;

int triangular (int n);

int main() 
{
	for (int x=0;x<=500;)
}

// First we make a function that calculates the n-th triangular number

int triangular (int n)
{
	int sum=0;
	for (int x=1;x<=n;x++)
	{
		sum=sum+x;
	}
	
	return sum;
}