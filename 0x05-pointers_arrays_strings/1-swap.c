#include "main.h"
/**
 * swap_int - to print the swap value
 *
 * @a: value of integer a
 * @b: value of integer b
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
