#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the numbers argument passed
 *
 * @separator: character to separate the numbers
 * @n: number of argunebts passed
 * @...: ellipsis
 *
 * Return: arguments passed on success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int arg1;
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i <= n; i++)
	{
		arg1 = va_arg(arguments, int);
		printf("%d", arg1);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arguments);

	printf("\n");
}
