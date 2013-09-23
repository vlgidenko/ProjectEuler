#include<iostream>
using namespace std;
int main()
{
	int sumSquared = 0;
	int squaredSum = 0;
	int sum = 0;
	int difference = 0;
	for(int x = 1; x < 101;x++)
	{
		squaredSum += x*x;
		sum += x;
	}
	sumSquared = sum * sum;
	difference = squaredSum - sumSquared;
	cout<<"The difference is "<<difference<<endl;
	return 0;
}