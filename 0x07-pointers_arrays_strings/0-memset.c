#include "main.h"
#include <stdio.h>
/**
 * _memset - prints constant byte to a pointer
 *
 * @s: address memory to be printed
 * @b: constant byte to be pointed
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *dest_s;
	unsigned int byt;

	if (s == NULL)
		return (NULL);

	dest_s = (char *) s;

	for (byt = 0; byt <= n; byt++)
		dest_s[byt] = b;
	return (dest_s);
}

void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);
    return (0);
}
