#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
        exit(1); // You can exit the program with an error code here
    }

    int value = stack_arr[top];
    top = top - 1;
    return value;
}

int main()
{
    int data;

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
	push(6);
    data = pop();

    return 0;
}

