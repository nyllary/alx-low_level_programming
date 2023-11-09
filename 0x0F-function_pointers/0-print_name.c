#include <stdio.h>
#include "main.h"
/**
 * print_name - prints name from a function pointer
 *
 * @name: character array
 * @f: pointer to a function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
