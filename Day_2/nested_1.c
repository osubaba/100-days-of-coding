#include <stdio.h>

/**
 * Main -  main block
 * Description - understanding how nested loops work
 * Return: returns (0) always
 */
int main(void)
{
	int i,j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 6; j++)
		{
			putchar(j + '0');
		}
		putchar(i + '0');
		putchar('\n');
	}
	return (0);
}
