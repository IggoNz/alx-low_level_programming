#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number
 * of arguments passed into it.
 * @argc: number of arguments
 * @argv: an array showing the arguments
 * Return: 0 (always)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
