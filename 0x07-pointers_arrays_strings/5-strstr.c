#include "main.h"
/**
 * _strstr - locates a needle in haystack
 *
 * @haystack: the main string
 * @needle: the substring to be located
 *
 * Return: Always 0(Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for  (; *haystack != '\0'; haystack++)
	{
		char *main_str = haystack;
		char *sub_str = needle;

		while (*main_str == *sub_str && *sub_str != '\0')
		{
			main_str++;
			sub_str++;
		}

		if (*sub_str == '\0')
			return (haystack);
	}
	return (NULL);
}
