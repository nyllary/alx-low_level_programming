#include "main.h"
#include <stdio.h>
/**
 *  _isdigit - checks if character is a digit
 *
 * @c: charater to be checked
 *
 * Return: ALways 0(Success)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (0);
	}
	else
		return (1);
}

int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
