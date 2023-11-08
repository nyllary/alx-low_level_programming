#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees allocated dinamically memory
 *
 * @d: memory to be freed
 *
 * Return: Always 0(Success)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
