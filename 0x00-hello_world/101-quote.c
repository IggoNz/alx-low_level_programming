#include<unistd.h>
/**
 * main -A C program that prints a line to the standard error
 * Description: 'A program that prints a statement'
 * Return: 1 (Succesful)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
