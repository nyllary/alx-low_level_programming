#include "main.h"
/**
 * string_toupper - printd the lowecase to uppercase
 *
 * @upp: characters
 *
 * Return: Always 0
 */
char *string_toupper(char *upp)
{
	int var;

	for (var = 0; upp[var] != '\0'; var++)
	{
		if (upp[var] >= 'a' && upp[var] <= 'z')
			upp[var] = upp[var] - 32;
	}
	return (upp);
}
