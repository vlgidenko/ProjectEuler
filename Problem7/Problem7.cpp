#include<iostream>
using namespace std;
int main()
{
	int primeCount = 0;
	int number = 1;
	while(primeCount < 10001)
	{
		number++;
		for(int x = 2; x <= number;x++)
		{
			if(number % x == 0 && x != number)
			{
				break;
			}
			else if(x == number)
			{
				primeCount++;
			}
		}
	} 
	cout<<"Prime number 10001 is "<<number<<endl;
}