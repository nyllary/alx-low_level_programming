#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char *_strdup - prints out a copy of a string from a pointer
 *
 * @str: string pointer
 *
 * Return: A character pointer
 */

char *_strdup(char *str)
{
	int count, i;
	char *dupstr;

	if (str == NULL)
		return (NULL);

	count = 0;
	while (str[count] != '\0')
		count++;

	dupstr = malloc(count * sizeof(char) + 1);

	for (i = 0; str[i] != '\0'; i++)
	{
		dupstr[i] = str[i];
	}
	if (dupstr == NULL)
		return (NULL);

	return (dupstr);
}
