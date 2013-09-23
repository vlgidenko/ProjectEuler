#include<iostream>
using namespace std;
int main()
{
	bool smallest = false;
	int x = 0;
	while(!smallest)
	{
		x++;
		for(int y = 1; y < 21; y++)
		{
			if(x % y == 0)
			{
				if(y == 20)
				{
					smallest = true;
				}
			}
			else
			{
				break;
			}
		}
		
	}
	cout<<"Smallest number is "<<x<<endl;
	return 0;
}