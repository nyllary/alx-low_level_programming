#include "main.h"
/**
 * _isalpha - prints alphabetic characters
 *
 * @c: characters to be checked for alphabetic characters
 *
 * Return: Always 0(Success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
