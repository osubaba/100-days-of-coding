#include <stdio.h>
/**
 * main - main entry
 * Description - the size of intergers
 * Return: returns (0) succeful
 */
int main(void)
{
	int mylove;
	int numbers [5] = {40, 29, 10, 9, 4};

	printf("%lu\n", sizeof(mylove));
	printf("%lu\n", sizeof(numbers));
	printf("%p\n", numbers);
	printf("%p\n", &numbers);	
	printf("%d\n", *numbers);
	printf("%d\n", *(numbers + 1));
	printf("%d\n", *(numbers + 4));
	
	return (0);
}
