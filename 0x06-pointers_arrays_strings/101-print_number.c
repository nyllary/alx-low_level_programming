#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an inter
 *
 * @n:integer values to be printed
 *
 * Return: Always 0
 */
void print_number(int n)
{
	int a;

	for (a = n; a >= 0;)
	{
		if (a < 0)
		{
			a = -n;
			_putchar('-');
		}
		else
		{
			a = n;
			print_number(n);
		}
		_putchar(n);
	}
}

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
