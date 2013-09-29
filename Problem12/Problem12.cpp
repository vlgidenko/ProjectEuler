#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int divisors = 0;
	int number = 1;
	int triNum = 0;
	int square = 0; 
	while(divisors <= 500)
	{
		divisors = 0;
		triNum += number;
		number++;
		square = sqrt(triNum);
		for(int y = 1; y <=square; y++)
		{
			if(triNum % y == 0)
			{
				divisors += 2;
			}
			if(square * square == number)
			{
				divisors--;
			}
		}
	}
	cout<<"The number is "<<triNum<<endl;
	return 0;
}