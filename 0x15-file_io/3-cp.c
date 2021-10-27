#include "main.h"

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

/**
 *main - copies the content of a file into another file
 *@ac: number of arguments passed to main
 *@av: array of string arguments passed to main
 *
 *Return: 0 on success, positive integer on failure
 *
 */

int main(int ac, char *av[])
{
	int inputFd, outputFd, openFlags;
	char buffer[BUF_SIZE];
	mode_t filePerms;
	ssize_t bytesRead, bytesWritten;

	openFlags = O_WRONLY | O_CREAT | O_TRUNC;
	filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inputFd = open(av[1], O_RDONLY);
	bytesRead = read(inputFd, buffer, BUF_SIZE);
	if (inputFd == -1 || bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	outputFd = open(av[2], openFlags, filePerms);
	bytesWritten = write(outputFd, buffer, bytesRead);
	if (outputFd == -1 || bytesWritten == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(inputFd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", inputFd);
		exit(100);
	}
	if (close(outputFd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", outputFd);
		exit(100);
	}
	return (0);
}
