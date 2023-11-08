#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a struct
 *
 * @d: the tag of the struct
 * @name: first element of the struct (name)
 * @age: second element of the struct (age)
 * @owner: third element of the struct
 *
 * Return Always 0(Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
