#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print all - prints any type passsed to it
 *
 * @format: The list of data types passed
 *
 * Return: Always 0(success)
 */
void print_all(const char * const format, ...)
{
	int i = 0, int_arg;
	char char_arg;
	float float_arg;
	char *str_arg;
	va_list all;

	va_start(all, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			char_arg = va_arg(all, int);
			printf("%c", char_arg);
		}
		else if (format[i] == 'i')
		{
			int_arg = va_arg(all, int);
			printf("%i", int_arg);
		}
		else if (format[i] == 'f')
		{
			float_arg = va_arg(all, int);
			printf("%f", float_arg);
		}
		else if (format[i] == 's')
		{
			str_arg = va_arg(all, char*);

			if (str_arg == NULL)
				printf("nil");
			else
				printf("%s", str_arg);
		}
		i++;
		if (format[i] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
				printf(", ");
	}
	va_end(all);
	printf ("\n");
}
