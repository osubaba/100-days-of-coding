#include <stdio.h>

/**
 * main - main entry
 * Description - prints lowercase letters in reverse
 * Return: returns (0)
 */
int main(void)
{
	char g;

	for (g = 'z'; g >= 'a'; g--)
	{
		putchar(g);
	}
	putchar('\n');

	return (0);
}
