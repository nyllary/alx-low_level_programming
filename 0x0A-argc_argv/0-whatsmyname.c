#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always (0)Success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	i = atoi(argv[i]);

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
