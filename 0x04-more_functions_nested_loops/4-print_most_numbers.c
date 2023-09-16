#include "main.h"
/**
 * print_most_numbers  - prints out a set of numbers, except two numbers
 *
 * Return; Always 0(Succeess)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 0);
		{
			if (n != 2 && n != 4)
			{
				_putchar(n);
			}
			else if (n == 9)
			{
				_putchar('\n');
			}
		}

	}
}
