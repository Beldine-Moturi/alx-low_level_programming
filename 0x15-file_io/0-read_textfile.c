#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX stdout
 *@filename: the name of the text file to read from
 *@letters: number of bytes to read and print
 *
 *Return: actual number of letters read and printed
 *        or 0 if: file cannot be opened
 *                 filename is NUll
 *                 any of the system calls fail
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
		return (0);
	buffer[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
		return (0);

	if (close(fd) == -1)
		return (0);

	return (bytesWritten);
}
