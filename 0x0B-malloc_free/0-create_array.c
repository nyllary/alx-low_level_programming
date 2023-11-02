#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 *
 * @size: amount of memory to be located in the heap
 * @c: the character to be printed
 *
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *charray;

	if (size == 0)
		return (NULL);

	charray = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		charray[i] = c;
	}

	if (charray == NULL)
	{
		return (NULL);
	}

	return (charray);
}
