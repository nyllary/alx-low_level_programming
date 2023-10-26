#include "main.h"
/**
 * _strlen_recursion -checks the lenght of a string
 *
 * @s: string
 *
 * Return: Always (0)Success
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}

	count = (1 + _strlen_recursion(s + 1));
	return (count);
}
