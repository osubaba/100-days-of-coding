#include <stdio.h>

/**
 * print alphabet - Write a function that prints 10 times the alphabet,
 * in lowercase
 */
void print_alphabet_x10(void)
{
    int i;
    char j;

    for (i = 0; i < 10; i++)
    {
        for (j = 'a'; j <= 'z'; j++)
        {
            putchar(j);
        }
        putchar('\n');
    }
}

int main()
{
    print_alphabet_x10();
    return 0;
}

