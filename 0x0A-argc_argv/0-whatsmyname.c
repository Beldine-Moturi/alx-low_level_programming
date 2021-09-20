#include <stdio.h>

/**
 *main - prints name of program
 *@argc: counts number of arguments passed to main
 *@argv: stored arguments passed to main
 *
 *Return: 0 on success
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
