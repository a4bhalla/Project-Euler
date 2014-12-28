#include <iostream>

using namespace std;

int sum_1 (int term);
int sum_2 (int term);

int main()
{
	cout<<(sum_2(100)-sum_1(100));
}

int sum_1 (int term)
{
	int sum=0;
	for (int x=1;x<=term;x++)
	{
		sum=sum+x*x;
	}
	return sum;
}

int sum_2 (int term)
{
	int sum=0;
	for (int x=1;x<=term;x++)
	{
		sum=sum+x;
	}
	
	int updated=sum*sum;
	return updated;
}