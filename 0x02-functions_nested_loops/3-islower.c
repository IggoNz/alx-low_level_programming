#include "main.h"

/**
 * _islower -Shows  1 if the input is a
 * lowercase character. Another case, shows
 * 0
 * c:is the character to be checked
 * Return: 1 if char is lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
		else
		{
			return (0);
		}
		_putchar('\n');
	}


