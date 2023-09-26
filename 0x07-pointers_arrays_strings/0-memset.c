#include "main.h"
/**
 * _memset - prints constant byte to a pointer
 *
 * @s: address memory to be printed
 * @b: constant byte to be pointed
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *dest_s;
	unsigned int byt;

	if (s == NULL)
		return (NULL);

	dest_s = (char *) s;

	for (byt = 0; byt <= n; byt++)
		dest_s[byt] = b;
	return (dest_s);
}
