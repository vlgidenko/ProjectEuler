#include <iostream>
using namespace std;
int main()
{
	int x1 = 1;
	int x2 = 2;
	int x3, total;
	while(x2 < 4000000)
	{
		x3 = x1 + x2;
		if(x2 % 2 == 0)
		{
			total += x2;
		}
		x1 = x2;
		x2 = x3;
	}
	cout<<total<<endl;
	return 0;
}