#include "main.h"

/**
 * _isalpha - Checks the alphabetical order
 * Description: 'Checks the alphabetical order'
 * @c: the  character in ASCII code
 * Return: 1 if c is a letter, lowercase or uppercase. Otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || ((c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
