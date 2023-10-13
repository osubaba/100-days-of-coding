#include <stdio.h>

/**
 * int_abs - prints the abslute number 
 */
int _abs(int n)
{
	if (n < 0)
	{
		return(-n);
	}
	else
	{
		return (n);
	}
}
int main()
{
	int testNumber = 43;
	int result =  _abs(testNumber);

	printf("The absolute value of %d is: %d\n", testNumber, result);

	return 0;
}
