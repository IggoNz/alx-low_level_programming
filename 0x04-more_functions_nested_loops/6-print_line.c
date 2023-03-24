#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: number of times line should be drawn.
 * Return: 0 (Always)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
