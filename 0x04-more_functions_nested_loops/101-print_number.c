#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num, num2;
	int i;
	int aux = 1;

	if (n < 0)
	{
		n = n * -1;
		putchar('-');
	}
	num = n;
	num2 = num;
	if (num > 9)
	{
		while (num >= 10)
		{
			aux = aux * 10;
			num = num / 10;
		}
		putchar((num2 / aux) + '0');
		aux = aux / 10;

		for (i = aux; i >= 1; i = i / 10)
			putchar((num2 / i) % 10 + '0');
	}
	else
		putchar(num + '0');
}
