#include<iostream>
using namespace std;
int main()
{
	int x = 3;
	int y = 5;
	int total = 0;
	for(int j = 1; j < 1000; j++)
	{
		if(j % x == 0 || j % y == 0)
		{
			total += j;
		}
	}
	cout<<"The anwser is "<<total<<endl;
	return 0;
}