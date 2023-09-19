#include "main.h"
/**
 * puts2 - prints out the characters of a string
 *
 * @str: the string to be printed
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int o = 0;

	while (str[o] != '\0')
	{
		if (o % 2 == 0)
			_putchar(str[o]);
		o++;
	}
	_putchar('\n');
}
