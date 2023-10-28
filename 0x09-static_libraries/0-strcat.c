#include "main.h"
/**
 * _strcat - concatenates two striings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: Always 0(Success)
 */
char *_strcat(char *dest, char *src)
{
	int str1, str2, i;

	str1 = 0;
	str2 = 0;


	while (dest[str1] != '\0')
		str1++;

	while (src[str2] != '\0')
		str2++;

	for (i = 0; i < str2; i++)
	{
		dest[str1 + i] = src[i];
	}

	dest[str1 + str2] = '\0';

	return (dest);
}
