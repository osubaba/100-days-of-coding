#include <stdio.h>
/**
 * main - main Entry
 * Discription - understanding how break works
 * Return: returns (0)
 */
int main(void)
{
	int n;

	printf("enter number\n" );
	scanf("%d", &n);

	while (n != 0)
	{
		if (n > 0)
		break;

		printf("enter number\n" );
		scanf("%d", &n);
	}
	return (0);
}

