#include <stdio.h>
#include <stdlib.h>
#define MAX 5 

int stack_arr[MAX];
int top = -1;

void push(int data)
{
	if (top  == MAX - 1)
	{
		printf("stack overflow\n" );

		return;
	}
	top = top + 1;
	stack_arr[top] = data;
}
int pop()
{
	int baba;
	if (top = -1)
	{
		printf("stack underflow\n" );
		exit(1);
	}
	top = top --;
	return baba;
}
int main()
{
	int data;
	
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);

	data = pop();
	return (0);
}
