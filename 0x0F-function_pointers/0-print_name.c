#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name from a function pointer
 *
 * @name: character array
 * @f: pointer to a function
 *
 * Return: Nothing
 */

typedef void (*PrintFunction)(char *);

void print_name(char *name, PrintFunction f)
{
	f(name);
}
