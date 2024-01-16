#include "main.h"
/**
 * _atoi - converts a string into an integer
 *
 * @s: charaters
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
	int j = 1;
	unsigned int num = 0;

	do {
		if (*s == '_')
			j *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
				break;
	} while (*s++);
	return (num * j);
}
