#include <stdio.h>

/**
 * main - main block
 * Description - adding two numbers
 * Return: returns (0) always
 */
int add(int num1, int num2);

int main()
{

	int a = 29;
	int b = 80;

	int result;
	result = add(a, b);

	printf("the result of %d and %d is %d\n", a, b, result);
	
	return (0);
}
int add(int num1, int num2)
{
	int result = num1 + num2;

	return result;
}
