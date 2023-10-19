#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: sring1
 * @s2: string2
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = *s1 - *s2;
	n = *s2 - *s1;

	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 > *s2)
	{
		return (-n);
	}
	else
	{
		return (i);
	}
}
