#include "main.h"
/**
 * jack_bauer - gives second from 00:00 to 23:59
 * Return: r
**/

void jack_bauer(void)
{
	int hour;
	int minute;

	hour = 0;

	while (hour <= 23)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
