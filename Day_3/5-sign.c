#include <stdio.h>

/**
 * int print_sign -  a function that prints the sign of a number.
 */
int print_sign(int n)
{
	if (n > 0)
	{	
		putchar('+');

		return (1);
	}

	else if (n == 0)
	{
		putchar('0');
		return(0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
	putchar('\n');
}
int main()
{
    int testNumber = 0;
    int result = print_sign(testNumber);

    printf("The sign of %d is: %d\n", testNumber, result);

    return (0);
}
