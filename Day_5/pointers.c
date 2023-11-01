#include <stdio.h>

/**
 * main - main Entry
 * Description - describes how pointers are used
 * Return: returns 0 (succes)
 */
int main(void)
{
	int myage = 43;

	int *ptr = &myage;

	printf("%d\n", *ptr);

	printf("%p\n", ptr);
}
