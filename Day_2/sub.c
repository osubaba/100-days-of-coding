#include <stdio.h>

/**
 * main - main block
 * Description - substracting integers
 * Return: return (always) 0
 */
int sub(int num1, int num2);

int main()
{
	int i = 50;
	int j = 100;
	int result;

	result = sub(i, j);

	printf("sub %d from %d is %d\n", i, j, result);

	return (0);
}
int sub(int num1, int num2)
{
	int result = num1 - num2;
	return result;
}
