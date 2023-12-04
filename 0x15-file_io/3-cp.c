#include "main.h"
#include <fcntl.h>
#include <unistd.h>

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

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to", "");
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to file", argv[2]);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to file", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from file", argv[1]);
	}
	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd", argv[1]);
	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd", argv[2]);
	return (0);
}
