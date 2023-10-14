#include "main.h"
/**
 * print_square - prints out lenght value
 * @size: the size of the square
 *
 * Return: Argument
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, c;

		for (row = 0; row < size; row++)
		{
			for (c = 0; c < size; c++)
			{
				if (row == c)
				{
					_putchar('#');
				}
				else if (row < c)
				{
					_putchar('#');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
