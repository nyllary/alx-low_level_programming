#include<stdio.h>
#include<stdlib.h>

/**
*main - checks the code
*
*@argc: Argument count
*@argv: Argument vector
*
*Return: Always (0)Success
*/
int main(int argc, char *argv[])
{
	int cents, totalcoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	totalcoins = 0;
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;

		else if (cents >= 10)
			cents -= 10;

		else if (cents >= 5)
			cents -= 5;

		else if (cents >= 2)
			cents -= 2;

		else
		{
			cents -= 1;
		}
		totalcoins++;
	}
	printf("%d\n", totalcoins);
	return (0);
}
