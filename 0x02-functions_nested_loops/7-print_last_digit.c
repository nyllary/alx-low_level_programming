#include "main.h"
/**
 * print_last_digit - prints digits
 *
 * @a: basic integer element return as argument
 *
 * Return: Always 0(Success)
 */
int print_last_digit(int a)
{
	int k;

	if (a < 0)
		a = -a;

	k = a % 10;

	if (k < 0)
		k = -k;
	_putchar(k + '0');

	return (k);
}
