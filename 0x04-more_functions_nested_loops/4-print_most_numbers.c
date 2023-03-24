#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9
 * Description: prints integers except 2 and 4
 * Return: 0 (Always)
 */
void print_most_numbers(void)
{
	int j = 0;

	for (; j <= 9; j++)
	{
		if (j == 2 || j == 4)
		{
			continue;
		}
		else
		{
			_putchar(j + '0')
		}
	}
	_putchar('\n');
}
