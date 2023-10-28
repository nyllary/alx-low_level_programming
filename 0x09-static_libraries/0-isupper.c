#include "main.h"

/**
 * _isupper - checks the code for uppercase letters
 *
 * @c: chareater to be checked
 *
 * Return: 0(Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
