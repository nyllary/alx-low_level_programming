#include "main.h"
#include <stdio.h>
/**
 * print_rev - print in reverse form
 *
 * @s: the string to be printed in reverse
 *
 * Return: Always 0(Success)
 */
void print_rev(char *s)
{
	int len, index;

	len = 0;

	while (len != '\0')
		len++;

	for (index = len + 1; index >= 0; index--)
		_putchar(s[index]);

	   _putchar('\n');
}
