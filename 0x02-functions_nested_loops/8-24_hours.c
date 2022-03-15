#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int x = 0;

	for (i = 0; i < 24 ; i++)

	{
		k = i / 10;
		y = i % 10;
		for (j = 0; j < 60; j++)
		{
			m = j / 10;
			t = j % 10;
			_putchar(a + 'k');
			_putchar(b + 'y');
			_putchar(':');
			_putchar('0' + 'm');
			_putchar('0' + 't');
			_putchar('\n');
		}
	}
}
