#include <iostream>

using namespace std;
int main() 
{
	int sum=0;
	for (int x=999; x>=0; x--)	
		{
			if (x%3==0 || x%5==0)
			{
					sum+=x;
			}
			
		}
	cout<<sum;
		
		return 0;
}