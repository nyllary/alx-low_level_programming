#include "main.h"
/**
 * _strlen - prints the length of the string
 *
 * @s: the string to be printef
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int cha, count;

	count = 0;

	for (cha = 0; s[cha] != '\0'; cha++)
		count++;
	return (count);
}
