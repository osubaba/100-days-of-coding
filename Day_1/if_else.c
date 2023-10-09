#include <stdio.h>

/**
 * main - main Entry
 * Description - understanding if-else statement
 * Return: returns (0)
 */
int main(void)
{
	int age = 0;

	printf("Enter your age: ");
	scanf("%d", &age);

	if (age < 10)
	{
		printf("You are young\n");
	}
	else if (age == 10)
	{
		printf("You are 10 years old\n");
	}
	else
	{
		printf("You are older than 10\n");
	}
	return (0);
}

