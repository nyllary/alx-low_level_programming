#include <stdio.h>
/**
 * pre_main_function - prints a string before the main function
 *
 * Return: Nothing
 */
void __attribute__((constructor)) pre_main_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
