#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	vector<long int> primes;
	primes.push_back(2);
	primes.push_back(3);
	long int number = 3;
	long int sum = 0;
	bool prime = true;
	while(number < 2000000)
	{
		prime = true;
		number+=2;
		for(int x = 0; x < primes.size();x++)
		{
			if (primes.at(x) > sqrt(number)) break;
			if(number % primes.at(x) == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime) {
			cout << "PRIME " << number<< endl;
			primes.push_back(number);
		}
	} 
	for(long int y = 0; y < primes.size(); y++)
	{
		sum += primes.at(y);
	}
	cout<<sum<<endl;
	return 0;
}