#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int sum, num;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			sum += num;
		}
	}

	printf("The sum of all multiples of 3 or 5 below 1024 is %d\n", sum);
	return (0);
}
