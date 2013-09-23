#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long int number = 600851475143;
	bool fact = false;
	for(int x =2.0; x< number; x++)
	{
		if(number % x == 0)
		{
			cout<<x<<" "<<endl;
			number = number / x;
		}
	}
	cout<<"number is "<<number<<endl;
	return 0;
}