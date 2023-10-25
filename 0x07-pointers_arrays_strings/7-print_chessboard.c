#include "main.h"
/**
 * print_chessboard - prints the chessboard concept
 *
 * @a: character array
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar("%c", a[a][b]);
		}
		_putchar('\n');
	}
}
