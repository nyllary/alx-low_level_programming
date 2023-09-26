#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - entry point
 *
 * Return: Always 0(Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return(0);
}
