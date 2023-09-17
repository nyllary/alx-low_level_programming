#include "main.h"
/**
 * print_triangle - prints the size of the triagles
 * @size: the size of the triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, col, m;

		for (col = 0; col < size; col++)
		{
			for (row = size - col; row > 1; row--)
			{
				_putchar(' ');
			}
			for (m = row + col; m >= 1; m--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
