#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 *
 * @dest: first string
 * @src: second string
 * @n: The length of int
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && *(src + m); m++)
	{
		*(dest + m) = (src[m]);
	}
	for (; m < n; m++)
	{
		*(dest + 1) = '\0';
	}
	return (dest);
}
