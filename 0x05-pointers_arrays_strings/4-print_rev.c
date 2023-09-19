#include "main.h"
#include <stdio.h>
/**
 * print_rev - print in reverse form
 *
 * @s: the string to be printed in reverse
 *
 * Return: Always 0(Success)
 */
void print_rev(char *s)
{
	    int len = 0, index = 0;


	   for (index = len - 1; index >= 0; index--)
		   _putchar(s[index]);

	   _putchar('\n');
}

int _strlen(char *)
{
	int val, coount;

	val = 0;

	for (val = 0; s[val] != '\0'; val++)

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
