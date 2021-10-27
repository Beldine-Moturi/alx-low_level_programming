#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: the name of the file to append to
 *@text_content: the string to add at the end of the file
 *
 *Return: 1 on success, -1 otherwise
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytesWritten = write(fd, text_content, len);
		if (bytesWritten == -1 || bytesWritten != (ssize_t)len)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
