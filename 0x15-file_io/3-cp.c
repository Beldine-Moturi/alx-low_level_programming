#include "main.h"

char *create_buffer(char *filename);
void close_file(int fd);


/**
 * create_buffer - Allocates 1024 bytes to a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 *
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}


/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 *
 *Return : void
 *
 */

void close_file(int fd)
{
	int file;

	file = close(fd);

	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 *main - copies the content of a file into another file
 *@ac: number of arguments passed to main
 *@av: array of string arguments passed to main
 *
 *Return: 0 on success, positive integer on failure
 *
 */

int main(int argc, char *argv[])
{
	int inputFd, outputFd, openFlags;
	char *buffer;
	mode_t filePerms;
	ssize_t bytesRead, bytesWritten;
	
	openFlags = O_WRONLY | O_CREAT | O_TRUNC;
	filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	inputFd = open(argv[1], O_RDONLY);
	bytesRead = read(from, buffer, 1024);
	outputFd = open(argv[2], openFlags, filePerms);

	do {
		if (inputFd == -1 || bytesRead == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		bytesWritten = write(outputFd, buffer, bytesRead);
		if (outputFd == -1 || bytesWritten == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		bytesRead = read(inputFd, buffer, 1024);
		outputFd = open(argv[2], O_WRONLY | O_APPEND);

	} while (bytesRead > 0);

	free(buffer);
	close_file(inputFd);
	close_file(outputFd);
	return (0);
}
