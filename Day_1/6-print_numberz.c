#include <stdio.h>

/**
 * main - main Entry
 * Description - prints base 10 digits using putchar
 * Return: returns 0 (always)
 */
int main(void)
{
	int b = 0;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
		putchar('\n');
	}
	return (0);
}
