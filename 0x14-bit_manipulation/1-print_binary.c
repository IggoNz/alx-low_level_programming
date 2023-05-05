#include "main.h"

/**
 * print_binary - used to print the representation of a number in binary
 * @n: the number being printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;

	unsigned long int i current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
		_putchar('1');
		count++;
		}
		else if (count)
		_putchar ('0');
	}
	if (!count)
		_putchar('0');
}