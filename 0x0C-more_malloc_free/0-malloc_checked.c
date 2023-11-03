#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: size of memory to be allocated
 *
 * Return: A pointer to the memory allocated
 *	98 when alocation fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
