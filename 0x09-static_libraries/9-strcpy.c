#include "main.h"
/**
 * _strcpy - copy strings to
 *
 * @dest: new address
 * @src: initial address
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int val = 0;

	while (*(src + val) != '\0')
	{
		*(dest + val) = *(src + val);
		val++;
	}
	*(dest + val) = '\0';

	return (dest);
}

