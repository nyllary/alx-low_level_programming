#include "main.h"
/**
 * more_numbers - function name of the code
 *
 * Return: Always 0(Success)
 */
void more_numbers(void)
{
	int m, t;

	for (m = 0; m <= 14; m++)
	{
		for (t = 0; t < 10; t++)
		{
			_putchar(m + '0');
		}
		_putchar('\n');
	}
}
