#include "main.h"
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text to an already existing file
 *
 * @filename: a pointer to the name of the file
 * @text_content: NULL terminator at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes = write(file, text_content, strlen(text_content));

		if (bytes == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
