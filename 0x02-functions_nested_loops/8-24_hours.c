#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - a person
 *
 * Return: Always 0(Success)
 */
int jack_bauer(void)
{
	int day, hour;

	day = 0;

	while
	{
		hour = 0;
		while (hour < 60)
		{
			_putchar((day / 10) + '0');
			_putchar((day % 10) + '0');
			_putchar(':');
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar('\n');
			hour++;
		}
		day++;
	}
}

int main(void)
{
    jack_bauer();
    return (0);
}
