#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14
 * Returns: 0 (Always)
 */
void more_numbers(void)
{
	int j, k;

	for (j = 0; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}

