#include <stdio.h>
#include <math.h>
/**
 * main - checks the code for the highest factor
 *
 * findLargestPrimeFactor - finds the larges number
 *
 * lomg lomg - function to find the largest factor
 *
 * @n: largest prime factor
 *
 * Return: Always 0
 */

long long findLargestPrimeFactor(long long n)
{
	long long maxPrime = -1;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}
	for (long long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
		return (0);
	}

	if (n > 2)
	{
		maxPrime = n;
		return (maxPrime);
	}
}

int main(void)
{
	long long num = 612852475143;
	long long largestPrimeFactor = findLargestPrimeFactor(num);

	printf("%lld\n", largestPrimeFactor);
	return (0);
}
