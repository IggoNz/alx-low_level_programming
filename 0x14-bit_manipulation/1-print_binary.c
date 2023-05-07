#include "main.h"

/**
 * print_binary - used to print the binary representation
 * of a given decimal number
 * @n: the decimal number to be printed in binary
 * Return: the printed binary decimal number
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;

	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current >> i;
		if (current & 1)
		{
			_putchar ('1');
			count++;
		}
		else if (count)
			_putchar ('0);
	}
	if (!count)
		_putchar ('0);
}
