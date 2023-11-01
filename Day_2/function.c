#include <stdio.h>

/**
 * main - main block
 * Description - undersatnding more of functions
 * Return: returns (0)
 */
int max(int num, int num1);

int main()
{
	int a = 90;
	int b = 190;
	int maximum;
	
	maximum = max(a, b);

	printf("the max no between %d and %d is %d\n", a, b, maximum);
	return (0);
}
int max(int num, int num1)
{
	int result;

	if (num > num1)
	{
		result = num;
	}
	else 
	{
		result = num1;
	}
	return result;
}

