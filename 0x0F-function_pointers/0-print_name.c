#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
//exercise
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints the name of a function
 * @name: the name to be printed.
 * @f: pointer to the function.
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
