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
	char dest_ptr = *dest;
	char src_ptr = *src;
	char desrc;

	while (*dest != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		src++;
	}

	desrc = (dest_ptr + src_ptr);
	 while (desrc != '\0')
		 desrc++;

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
