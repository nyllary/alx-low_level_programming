#include "main.h"
/**
 * _memcpy - copies a memory of a pointer into another pointer
 *
 * @dest: pointer destination
 * @src: memory source to be copied
 * @n: bytes os pointer
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
