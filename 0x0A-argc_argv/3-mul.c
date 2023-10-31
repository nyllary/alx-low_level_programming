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
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(-1);
	}

	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	return (0);
}
