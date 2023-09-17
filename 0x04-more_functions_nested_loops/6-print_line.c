#include "main.h"
/**
 * print_line - printd to draw a horizontal line to a specific length
 * @n: the lenght of the line to be printed
 *
 * Return: ALways 0(Success
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		if (n > 0)
		{
			for (a = 0; a < n ; a++)
			{
				_putchar('_');
			}
		}
			_putchar('\n');
	}
}
