#include <stdio.h>

int main(void)
{
	int i;
	int c;
	
	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
