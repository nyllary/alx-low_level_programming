#include "main.h"
/**
 * print_numbers - prints out a set of numbers
 *
 * Return; Always 0(Succeess)
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
		if (n == 9)
		{
			_putchar('\n');
		}
	}
}
