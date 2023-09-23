#include "main.h"
#include <stdio.h>
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
			upp[var] = upp[var] - 32
	}
	return (upp);
}

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
