#include <stdio.h>

int main(void)
{
	int nums[] = {3, 9, 0, 6, 4, 1, 7};
	for (int n = 0; n < 7; n++)
	{
		if (nums[n] == 0)
	
		{
			printf("found\n");

			return (0);
		}
	}
	printf("not found\n");
	return (1);
}
