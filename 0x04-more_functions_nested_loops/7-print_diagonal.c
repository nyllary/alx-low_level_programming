#include "main.h"
/**
 * print_diagonal - prints the length of diagonal
 * @n: length to be printed
 *
 * Return: Always 0(Success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r, c;

		for (r = 0; r < n; r++)
		{
			for (c = 0; c < n; c++)
			{
				if (r == c)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else if (r > c)
				{
					_putchar(' ');
				}
			}
		}
	}
}
