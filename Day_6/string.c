#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Description - describes string 
 * Return: returns (0) always
 */
int main(void)
{
	char str[12] = "Hello";
	char str1[12] = "World";
	char str2[12];

	strcpy(str2, str);
	printf("str2: %s\n", str2);

	strcat(str1, str);
	printf("str1: %s\n", str1);
	
	int len;

	len = strlen(str1);
	printf("strlen(str1): %d\n ", len);

	return (0);
}
