#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers passed as arguments to main
 *prints the result
 *@argc: count to number of arguments passed
 *@argv: array of arguments passed
 *
 *Return: 0 on success
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
