#include <iostream>

using namespace std;

int divisibility (long long int n);

int main() 
{
	int x=20;
	for (; divisibility(x)==0;)
	{
		x=x+20;
	}
	cout<<x;
}



int divisibility (long long int n)
{
	if (n%20==0 && n%19==0 && n%18==0 && n%17==0 && n%16==0 && n%15==0 && n%14==0 && n%13==0 && n%7==0 && n%11==0 && n%12==0)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
}