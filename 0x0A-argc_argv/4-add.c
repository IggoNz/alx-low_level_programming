#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks string
 * @str: array of string
 *
 * Return: 0 (success)
 */
int check_num(char *str)
{
	/*declare the variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* count the string */
	{
		if (!isdigit(str[count])) /* check if thre are digits in the str */
		{
			return (0);
		}
	count++;
	}
	return (1);
}
/**
 * main - A program that adds positive numbers.
 * @argc: count of the arguments
 * @argv: strng of the arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*loop through the array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* atoi converts a string to an integer */
			sum += str_to_int;
		}
		/* if a number contains non-digit symbols */
		else
		{
		printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
		return (0);
}
