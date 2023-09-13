#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j != 'q' && j != 'e')
		putchar(j);
	}
	putchar('\n');
	return (0);
}
