#include <stdio.h>
#include "main.h"

/**
 * int_index - iterates an array to locate integers
 *
 * @array: array to be iterated
 * @size: size of the array
 * @cmp: a compare function to check integers
 *
 * Return: An index to the integer on success
 *	-1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
