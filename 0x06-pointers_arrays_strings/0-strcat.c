#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 *
 * @dest: first character strig
 * @src: second character string
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int ab, ba;

	ab = 0;
	ba = 0;

	while (dest[ab] != '\0')
		ab++;

	while (src[ba] = '\0')
	{
		dest[ba] = src[ba];
		ab++;
		ba++;
	}

	dest[ab] = '\0';


	return (dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
