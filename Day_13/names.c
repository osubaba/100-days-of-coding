#include <stdio.h>
#include <string.h>

int main(void)
{
    char* names[] = {"Bali", "Austin", "Bob", "Emma", "Mitchell", "Frank"};

    for (int n = 0; n < 6; n++)
    {
        if (strcmp(names[n], "Bob") == 0)
        {
            printf("found\n");
            return 0;
        }
    }

    printf("not found\n");
    return 1;
}

