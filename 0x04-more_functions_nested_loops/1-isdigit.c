#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c:the digit being checked
 * Return: 1 if c is a digit
 * otherwise returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
