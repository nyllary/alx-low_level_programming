#include "main.h"
/**
 * _pow_recursion - prints the the exponent of a number
 *
 * @x: the first argument
 * @y: exponent of the number
 *
 * Return: Always (0)Success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
