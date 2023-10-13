#include <stdio.h>

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    return 0; 
}

int main()
{
    char testChar = 'h';
    int result = _islower(testChar);

    if (result == 1)
    {
        printf("%c is a lowercase character.\n", testChar);
    }
    else
    {
        printf("%c is not a lowercase character.\n", testChar);
    }

    return 0;
}

