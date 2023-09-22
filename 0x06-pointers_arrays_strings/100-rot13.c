#include "main.h"
/**
 * rot13 - method to perform function by
 * @rot: strings to encoded
 *
 * Return: Alway 0
 */
char *rot13(char *rot)
{
	int c, d;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; rot[c] != '\0'; c++)
	{
		for (d = 0; a[d] != '\0'; d++)
		{
			if (rot[c] == a[d])
			{
				rot[c] = b[d];
				break;
			}
		}
	}
	return (rot);
}
