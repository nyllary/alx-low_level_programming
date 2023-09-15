#include <stdio.h>
/**
 * main - prints numbers from 1 to 100
 *
 * Return: Always 0
 */

int main(void)
{
	int f;

	for (f = 1; f <= 100; f++)
	{
		if (f % 15 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (f % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (f % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", f);
		}
	}
	printf("\n");
	return (0);
}
