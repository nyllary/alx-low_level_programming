#include "main.h"
/**
 * print_most_numbers  - prints out a set of numbers, except two numbers
 *
 * Return; Always 0(Succeess)
 */
void print_most_numbers(void)
{
	int mn;

	for (mn = 0; mn <= 9; mn++)
	{
		if (mn != 2 && mn != 4)
		{
			_putchar(mn + '0');
		}
	}
	_putchar('\n');
}
