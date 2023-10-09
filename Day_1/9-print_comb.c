#include <stdio.h>

/**
 * main - main entry
 * Description - prints single digits followed by a comma
 * Return: returns (0) always
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');

			if (i < 9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
	}		
		putchar('\n');
	
	return (0);
}
