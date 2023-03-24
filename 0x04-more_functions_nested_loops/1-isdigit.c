#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @j:the character being checked
 * Return: 1 if c is a digit
 * otherwise returns 0
 */
int _isdigit(int j)
{
	if (j >= 48 && j <= 57)
	{
		return (1);
	}
	return (0);
}
