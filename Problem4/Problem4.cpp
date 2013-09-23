#include<iostream>
using namespace std;
int main()
{
	int number;
	int rev;
	int temp;
	int highest = 0;
	for(int x = 100; x < 1000; x++)
	{
		for(int y = 100; y < 1000; y++)
		{
			rev = 0;
			number = x * y;
			temp = number;
			while(temp != 0)
			{
				rev = rev * 10;
				rev = rev + temp%10;
				temp = temp/10;
			}
			if(number == rev)
			{
				if(number > highest)
				{
					highest = number;
				}
			}
		}
	}
	cout<<highest<<endl;
	return 0;
}