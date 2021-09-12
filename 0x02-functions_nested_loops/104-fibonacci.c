#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 *Return: returns 0 on successs
 *
 */

int main(void)
{
	unsigned long int x = 0, y = 1, z, x1, x2, y1, y2, z1, z2;

	int i;

	for (i = 0; i < 91; i++)
	{
		z = x + y;
		printf("%ld, ", z);

		x = y;
		y = z;
	}
	x1 = x / 1000000000;
	x2 = x % 1000000000;
	y1 = y / 1000000000;
	y2 = y % 1000000000;

	for (i = 91; i < 98; i++)
	{
		z1 = x1 + y1;
		z2 = x2 + y2;

		if (i == 97)
			printf("%ld%ld", z1, z2);
		else
			printf("%ld%ld, ", z1, z2);

		x1 = y1;
		x2 = y2;
		y1 = z1;
		y2 = z2;
	}
	putchar('\n');
	return (0);
}
