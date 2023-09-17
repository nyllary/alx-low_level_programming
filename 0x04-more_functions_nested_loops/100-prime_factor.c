#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	long int v, fac;

	v = 612852475143;
	for (fac = 2; fac <= v; fac++)
	{
		if (v % fac == 0)
		{
			v /= fac;
			fac--;
		}
	}
	printf("%ld\n", fac);

	return (0);
}
