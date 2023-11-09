#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 *
 * @array: array to be iterated
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
