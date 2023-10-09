#include <stdio.h>

/**
 * main - main block
 * Description - understanding how continue works
 * Return: returns (0) succesful
 */
int main(void)
{
	int i, j = 2;

	for (i = 1; i <= 20; i++)
	{
		if (i == j)
		{
			j = j + 2;

			continue;
		}

		printf("%d\n", i);
	}
	return (0);
}

