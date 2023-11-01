#include <stdio.h>

/**
 * main - main Entry
 * Description - describes the how loop is used
 * Return: returns (0);
 */
int main(void)
{
	int numbers[5] = {45, 9, 2, 54, 6};
	int *ptr = numbers;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *(ptr + i));
	}
	return (0);
}

