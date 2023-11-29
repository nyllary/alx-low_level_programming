#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file
 *
 * @filename: a pointer to the created file
 * @text_content: pointer to the content of the file
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t written_byte;
	int fileDesc;

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fileDesc == -1)
		return (-1);
	if (text_content != NULL)
	{
		written_byte = write(fileDesc, text_content, strlen(text_content));

		if (written_byte == -1)
		{
			close(fileDesc);
			return (-1);
		}
	}
	close(fileDesc);
	return (1);
}
