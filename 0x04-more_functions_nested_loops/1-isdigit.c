#include "main.h"
/**
 *  _isdigit - checks if character is a digit
 *
 * @c: charaters to be checked
 *
 * Return: ALways 0(Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
		return (0);
	else
		return (1);
}
