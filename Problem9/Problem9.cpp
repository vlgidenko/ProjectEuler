#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a = 1.0,b = 1.0, c = 1.0;
	float temp;
	int total = 1000;
	while(a < total)
	{
		b = a;
		temp = 0;
		while(temp < 1000)
		{
			c = sqrt(a * a + b * b); 
			if(c - int(c) == 0)
			{
				temp = a+b+c;
				if(temp == total)
				{
					cout<<"A = "<<a<<"B = "<<b<<"C = "<<c<<endl;
					cout<<fixed<<a*b*c<<endl;
					return 0;
				}
			}
			b++;
		}
		a++;
	}
	cout<<"A = "<<a<<"B = "<<b<<"C = "<<c<<endl;
	return 0;
}