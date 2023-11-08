#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new struct
 *
 * @name: first argumrent of the function
 * @age: second argument
 * @owner: third argument
 *
 * Return: A point to the heap memory
 *	NULL if memory fails to allocate
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = strdup(name);
	new->age = age;
	new->owner = strdup(owner);

	return (new);
}
