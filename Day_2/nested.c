#include <stdio.h>

/**
 * main - main block
 * Description - understanding nested loops
 * Return: returns 0 (always)
 */
int main(void)
{
	int m, n;
	
	for (m = 1; m <= 6; m++)
	{
		for (n = 1; n <= 5; n++)
		{
			printf("%d\n", n);
		}
	}
	return (0);
}
	

