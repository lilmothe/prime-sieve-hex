//this program prints the prime numbers between 1-1000000 in hexadecimal

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i, j, k;
	int prime[1000000];
	int count = 0;
	for (i = 2;i < 1000000;i++)
	{
		for (j = 2;j <= sqrt(i);j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			prime[count] = i;
			count++;
		}
	}
	for (k = 0;k < count;k++)
	{
		cout << hex << prime[k] << endl;
	}
	return 0;
}

// this program prints the prime numbers between 1-1000000 in hex