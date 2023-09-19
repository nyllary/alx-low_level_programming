#include "main.h"
/**
 * _puts - prints the output of the string
 *
 * @str: the pointer name
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)

		_putchar(*str++);

	_putchar('\n');
}
