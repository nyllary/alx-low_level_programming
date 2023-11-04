#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates for an array
 *
 * @nmemb: number of elements of the array
 * @size: size of one element
 *
 * Return: A pointer to allocated memory
 *      NULL if no memory is allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrayloc;
	unsigned int total_size, i;
	char *nmembArray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	arrayloc = malloc(total_size * sizeof(size));

	if (arrayloc == NULL)
		return (NULL);

	nmembArray = (char *)arrayloc;
	for (i = 0; i < total_size; i++)
		nmembArray[i] = 0;

	return (arrayloc);
}
