#include <unistd.h>

/**
 *main - prints string to standard error
 *followed by a new line
 *
 *Return: returns 1
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
