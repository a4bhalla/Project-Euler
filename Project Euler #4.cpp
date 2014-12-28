#include <iostream>

int Length (long long int n);
int isPalindrome (long long int n);

using namespace std;
int main()
{
	int largest=0;
	for (int z=999;z>=500;z--)
	{
		for (int k=999;k>=500;k--)
		{
			if ((isPalindrome(k*z)==1) && (k*z)>largest)
			{
				largest=k*z;
			}
		}
	}
	
	cout<<largest;
}

// first we need to create a function that tells us the number of digits that a number has and then in our isPalindrome function we create an array and check that the two arrays have the same elements. If they are the same then the number is a palindrome 

int Length (long long int n)
{
	int x=0;
	for (; n>0; x++)
	{
		n=n/10;
	}
	
	return x;
}

int isPalindrome (long long int n)
{
	int size=Length(n);
	int array_1[size], array_2[size];
	int v=n;
	for (int x=0; x<size;x++)
	{
		array_1[x]=v%10;
		v=v/10;
	}
	
	for (int y=size-1; y>=0;y--)
	{
		array_2[y]=n%10;
		n=n/10;
	}
	
	int sum=0;
	for (int k=0;k<size;k++)
	{
		if (array_1[k] != array_2[k])
		{
			sum=sum+1;
		}
	}
	
	if (sum==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
