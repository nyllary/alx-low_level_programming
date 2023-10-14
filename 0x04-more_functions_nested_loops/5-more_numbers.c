#include "main.h"
/**
 * more_numbers - function name of the code
 *
 * Return: Always 0(Success)
 */
void more_numbers(void)
{
	int m, t;

	for (m = 0; m <= 10; m++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t > 9)
			{
				_putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
		}
		_putchar(10);
		_putchar('\n');
	}
}
