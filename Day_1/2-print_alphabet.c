#include <stdio.h>

/**
 * main - main entry
 * Description - prints the alphabet in lowercase, followed by a new line.
 * Return: returns (0)
 */
int main(void)
{
	char c;

	for (c ='a';c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
