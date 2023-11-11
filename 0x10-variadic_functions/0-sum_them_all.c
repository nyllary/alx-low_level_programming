#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums integers argument passed to it
 *
 * @n: number of arguments passed
 * @...: arguments to be passed
 *
 * Return: the sum of the arguments on success
 *      0 if no arguments are passed
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, current_arg;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		current_arg = va_arg(args, int);
		sum += current_arg;
		i++;
	}

	va_end(args);
	return (sum);
}
