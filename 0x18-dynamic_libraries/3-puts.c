#include "main.h"
/**
 * _puts - prints the output of the string
 *
 * @s: the pointer name
 *
 * Return: Always 0
 */
void _puts(char *s)
{
	while (*s)

		_putchar(*s++);

	_putchar('\n');
}
