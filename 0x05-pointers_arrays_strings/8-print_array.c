#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array of integer
 *
 * @a: array to be printed
 * @n: number of elements in the array
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int ad;

	for (ad = 0; ad < n; ad++)
	{
		if (ad != n - 1)
			printf("%d, ", a[ad]);

		else
			printf("%d", a[ad]);
	}
	printf("\n");
}
