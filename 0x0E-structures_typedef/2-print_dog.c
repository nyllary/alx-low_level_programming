#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 *
 * @d: struct tag
 *
 * Return: Always 0(Success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
