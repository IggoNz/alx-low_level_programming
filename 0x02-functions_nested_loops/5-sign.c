#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: the input number as an integer
 * Return: 1 if n is greater than 0, 0 if n is zero
 * -1 if less zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('43');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('48');
		return (0);
	}
	else
	{
		_putchar('45');
		return (-1);
	}
	_putchar('\n');
}
