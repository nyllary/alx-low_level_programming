#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always
 */
int main(void)
{
	char c;

	int x;

	strand(time(0));
	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}

	putchar(2772 - x)
		return (0);
}
