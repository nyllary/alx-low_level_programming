#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings passed as arguments
 *
 * @separator: characters to separate the string
 * @n: number of arguments to be passed
 * @...: ellipsis (variadic function)
 *
 * Return: A string on success
 *      nil on failure
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *cur_arg;

	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		cur_arg = va_arg(strings, char*);
		printf("%s", cur_arg);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	if (cur_arg == NULL)
		printf("nil");
	va_end(strings);

	printf("\n");
}
