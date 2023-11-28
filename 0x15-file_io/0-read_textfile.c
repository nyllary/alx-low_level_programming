#include "main.h"
#include <unistd.h>

/**
 * read_textfile - reads and prints the number of letters
 * in a given file to standard output
 * @filename: a pointer to the file to be read
 * @letters: number of letters to be read and printed from file
 * Return: The number of letters read on success
 *	0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_r, bytes_w;
	FILE *file = fopen(filename, "r");
	char *buff = (char *)malloc((letters + 1) * sizeof(char));

	if (filename == NULL || file == NULL)
		return (0);
	if (buff == NULL)
	{
		free(buff);
		fclose(file);
		return (0);
	}
	bytes_r = fread(buff, sizeof(char), letters, file);

	if (bytes_r <= 0)
	{
		free(buff);
		fclose(file);
		return (0);
	}
	buff[bytes_r] = '\0';

	bytes_w = write(STDOUT_FILENO, buff, bytes_r);

	if (bytes_w != bytes_r)
	{
		free(buff);
		fclose(file);
		return (0);
	}
	free(buff);
	fclose(file);

	return (bytes_r);
}
