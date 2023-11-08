#include <stdio.h>
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

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
