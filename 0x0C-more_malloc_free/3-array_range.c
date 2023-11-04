#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: A pointer to a located memory in the heap
 */

int *array_range(int min, int max)
{
	int size = ((max - min) + 1);
	int cur_value = min;
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size - 1; i++)
	{
		arr[i] = cur_value;
		i++;
	}
	return (arr);
}
