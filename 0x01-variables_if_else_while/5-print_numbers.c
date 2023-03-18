#include <stdio.h>
/**
 * main -Entry point
 * Description: 'A program that prints all single digit numbers to base 10'
 * Returns: 0 (Always)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
