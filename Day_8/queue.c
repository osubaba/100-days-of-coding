#include <stdio.h>
#include <stdio.h>
#define M 5

int queue[M];
int front = -1;
int rear = -1;

void queue (int i)
{
	if (rear = M -1)
	{
		printf("isfull\n");
	}
	else if (front = -1 && rear = -1)
	{
		front = rear = 0;
		queue[rear] = i;
	}
	else
	{
		rear ++;
		queue[rear] = i;
	}
}
int main ()
{
	enqueue(3);
	enqueue(1);
	enqueue(2);
	enqueue(4);
	display();
	peak();
	peak();
	display();
	return (0);

}
