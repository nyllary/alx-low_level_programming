#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenate two strings
 *
 * @dest: string1
 * @src: string2
 * @n: bytes of src
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
