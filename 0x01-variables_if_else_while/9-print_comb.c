#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char p;
	
	p = 48;

	for (p = 48; p <= 57; p++)
	{
		if (p > 48)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(p);
	}
	putchar('\n');
	return (0);
}
