#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int p;

	p = 0;

	for (p = '0'; p <= '9'; p++)
	{
		if (p > '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(p);
	}
	putchar('\n');
	return (0);
}
