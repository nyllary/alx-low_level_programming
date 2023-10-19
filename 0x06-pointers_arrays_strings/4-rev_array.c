#include "main.h"
/**
 * reverse_array - prints the string of array in reverse
 *
 * @a: array of int type variables
 * @n: number of elements of the string
 *
 * Return: Always )
 */
void reverse_array(int *a, int n)
{
	int b, temp;
	int r = n - 1;

	for (b = 0; b < n / 2; b++)
	{
		temp = a[b];
		a[b] = a[r];
		a[r] = temp;
		r--;
	}
}
