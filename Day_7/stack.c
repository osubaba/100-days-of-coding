#include <stdio.h>
#include <stdlib.h>
#define OSU 5

/**
 * main - Entry point
 * Description - describes how stack works
 * Return: returns 0 (always)
 */
int stack_arr[OSU];

int top = -1;
void push(int data)
{
	if (top == OSU - 1)
	{
		printf("stack overflow\n");
		return;
	}
        top = top + 1;
        stack_arr[top] = data;
}       

int main()
{
	push (1);
	push (2);
	push (3);
	push (4);
	push (5);
	push (6);
	return (0);
}
