#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @to: the character
 * @s: pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
