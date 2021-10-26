#include "main.h"

/**
 *create_file - creates a file
 *@filename: the name of the file to create
 *@text_content: the string to write to the file
 *
 *Return: 1 on success, otherwise -1
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, flags;
	mode_t filePerms;
	size_t len = 0;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	flags = O_CREAT | O_WRONLY | O_TRUNC;
	filePerms = S_IRUSR | S_IWUSR;

	fd = open(filename, flags, filePerms);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytesWritten = write(fd, text_content, len + 1);
		if (bytesWritten == -1 || bytesWritten != (ssize_t)(len + 1))
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
