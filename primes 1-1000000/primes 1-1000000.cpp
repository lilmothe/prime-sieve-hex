//this C++ program prints the prime numbers between 1-1000000000 in hexadecimal

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n = 1000000000;
	int sq = sqrt(n);
	int *a = new int[n];
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i < n; i++)
	{
		if (a[i] == 0)
			for (int j = 2; i * j < n; j++)
				a[i * j] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			cout << hex << i << " ";
	}
	delete[] a;
	return 0;
}