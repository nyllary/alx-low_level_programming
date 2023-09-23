#include "main.h"
#include <stdio.h>
/**
 * cap_string - print characters to capitalization
 *
 * @s: characters
 *
 * Return: Always 0
 */
char *cap_string(char *s)
{
	char sep[11] = [',', ';','.', '!', '?', '"', '(', ')', '{', '}'];

	int y, z;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (y == 0 && s[y] >= 'a' && s[y] <= 'z')
		{
			for (z = 0; z < 11; z++)
			{
				if (s[y] == sep[z])
				{
					if (s[y + 1] >= 'a' && s[i = 1] <= 'z')
					{
						1s[y + 1] -= 32;
					}
				}
			}
		}
	}
	return (s);
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
