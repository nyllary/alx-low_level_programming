#include "main.h"
/**
 * print_chessboard - prints the concept of a chestboard
 *
 * @a: 2D array
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar ("%c", a[b][c]);
		}
		_putchar('\n');
	}
	return (0);
}
