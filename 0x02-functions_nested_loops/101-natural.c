#include <stdio.h>
/**
 * main - prints numbers below 1024
 * that are multipliers of 3 and 5
 * Return: 0 (Always)
 */
int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0 || i % 5 == 0))
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
