#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string argument
 * @s2: second string argument
 *
 * Return: A character string pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *newstr;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	newstr = (char *)malloc(len1 + len2 + 1);

	for (i = 0; i < len1; i++)
		newstr[i] = s1[i];
	for (j = 0; j < len2; j++)
		newstr[i + j] = s2[j];

	if (newstr == NULL)
		return (NULL);
	newstr[i + j] = '\0';

	return (newstr);
}
