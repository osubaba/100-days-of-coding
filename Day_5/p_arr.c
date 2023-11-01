#include <stdio.h>

/**
 * main - main Entry
 * Description - using pointers and arrays
 * Return: returns (0) succes
 */
int main(void)
{
	int numbers [6] = {8, 9, 1, 20, 12, 5};

	int j;

	for (j = 0; j < 6; j++)
	{
		printf("%d\n", numbers[j]);
	}
	for (j = 0; j < 6; j++)
	{
		printf("%p\n", &numbers[j]);
	}

	return (0);
}
