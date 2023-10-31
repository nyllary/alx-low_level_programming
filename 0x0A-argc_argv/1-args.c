#include <stdio.h>

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
	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
	}
	(void)*argv;
	return (0);
}
