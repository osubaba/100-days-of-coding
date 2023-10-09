#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int m, n, o;

    for (m = 0; m <= 7; m++)
    {
        for (n = m + 1; n <= 8; n++)
        {
            for (o = n + 1; o <= 9; o++)
            {
                putchar(m + '0');
                putchar(n + '0');
                putchar(o + '0');

                if (m != 7 || n != 8 || o != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');
    return (0);
}

