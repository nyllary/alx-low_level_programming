#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints out a string
 *
 * @s: the string to be printed
 *
 * Return: Always (0)Success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
