#include <stdio.h>

/**
 * main - main block
 * Description - understanding how while loops work
 * Return: returns (0)
 */
int main(void)
{
	int i = 0;

	while (i != 10)
	{
		i++;
	
		printf("%d\n ", i);
	}
	if (i == 10)
	{
		printf("%d\n ", i);
	}

	return (0);
}
