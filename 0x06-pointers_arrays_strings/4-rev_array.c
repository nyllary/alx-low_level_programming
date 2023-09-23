#include "main.h"
#include <stdio.h>
/**
 * reverse_array - prints the string of array in reverse
 *
 * @a: array of int type variables
 * @n: number of elements of the string
 *
 * Return: Always )
 */
/*
void reverse_array(int *a, int n)
{
	int b, r;
	r = (n - 1) / 2;

	for (b = 0; b < (n / 2); b++)
	{
		if (r > b && r != '\0')
			r--;
	}
}
*/void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}

void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

