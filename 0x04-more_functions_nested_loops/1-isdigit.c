#include "main.h"
/**
 *  _isdigit - checks if character is a digit
 *
 * @c: charater to be checked
 *
 * Return: ALways 0(Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
