#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - adds two strings together
 *
 * @s1: string one
 * @s2: string two
 * @n: size of string to be added
 *
 * Return: A character pointer on success
 *	NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newptr;

	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0' && n > 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}

	newptr = malloc(n * sizeof(s1) + 1);

	return (newptr);
}

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
