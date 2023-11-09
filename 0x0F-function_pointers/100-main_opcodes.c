#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 at success
 *      Error at failure with specific status
 */

int main(int argc, char **argv)
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_ptr = (unsigned char *)main;
	/* Get the address of the main function */

	/* Print the opcodes for the specified number of bytes */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
	}

	printf("\n");

	return (0);
}
