#include <stdio.h>
#include <math.h>

long long maxprime(long long num);

long long maxprime(long long num)
{
	long long currmaxprime = -1;
	long long i;

	if (num % 2 == 0)
	{
		currmaxprime = 2;
		while(num % 2 == 0)
			num = num / 2;
	}

	for(i = 3; i <= sqrt(num); i += 2)
	{
		while(num % i == 0)
		{
			currmaxprime = i;
			num = num / i;
		}
	}

	if (num > 2)
		currmaxprime = num;

	return currmaxprime;
}
int main(void)
{
	long long x;

	x = 612852475143;

	printf("%lld\n", maxprime(x));
	return (0);
}
