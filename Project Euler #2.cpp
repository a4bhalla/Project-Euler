#include <iostream>
#include <cmath>
using namespace std;

int fib_closed_form (int n);
// Computes the n-th fibonacci number using the closed formula 


int main()
{
	int sum=0;
	for (int x=1;fib_closed_form(x)<4000000;x+=1)
	{
		if (fib_closed_form(x)%2==0)
		{
			sum=sum+fib_closed_form(x);
		}
	}
	
	cout<<sum;
	return 0;
}

// Function input is the term in the fibonacci sequence
// Output is the value of the term in the sequence rounded to the nearest integer due to approximations
// made by the closed form formula for the fibonacci sequence
int fib_closed_form(int n)
{
	int five=5;
	int number=round((pow(1+sqrt(5),n)-pow(1-sqrt(5),n))/(pow(2.0,n)*sqrt(5)));
	return number;
}