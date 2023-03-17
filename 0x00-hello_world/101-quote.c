#include<stdio.h>
#include<unistd.h>
/**
 * main -A C program that prints a line to the standard error
 * return: 1 (Succesful)
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
