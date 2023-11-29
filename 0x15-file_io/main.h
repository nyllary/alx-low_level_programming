#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>


#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - prints a message
 * @exit_code: exit status
 * @message: error message
 * @arg: the arguments
 * Return: the exit status
 */
void print_error_and_exit(int exit_code, const char *message, const char *arg)
{
	dprintf(2, "%s %s\n", message, arg);
	exit(exit_code);
}

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif
