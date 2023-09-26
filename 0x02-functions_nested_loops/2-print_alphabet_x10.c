#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * print_alphabet_x10 - prints ten times
 *
 * Return: Always 0(Success)
 */
void print_alphabet_x10(void)
{
	chat a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (b < 10)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
