#include <stdio.h>
/**
 * main - main block
 * Description - prints alphabetical letters in lowercase
 * Return: returns(0)
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p != 'q' && p != 'e')
		{
			putchar(p);
		}
	}

	putchar('\n');

	return(0);
}
