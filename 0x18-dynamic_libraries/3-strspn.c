#include "main.h"
/**
 * _strspn - gets length
 *
 * @s: initial segment
 * @accept: input
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, m, w;

	w = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (m = 0; accept[m] != '\0'; m++)
		{
			if (accept[m] == s[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
		{
			return (w);
		}
		w++;
	}
	return (w);
}
