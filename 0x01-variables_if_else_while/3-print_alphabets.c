#include <stdio.h>
/**
 * main - main block
 *
 * Description: Use 'putchar' to print all letters but the letter 'q' and 'e'
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
