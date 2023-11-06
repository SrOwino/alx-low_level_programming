#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
    int length = 0;
    int i;
    char temp;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    s--;

    for (i = 0; i < length / 2; i++)
    {
        temp = *s;
        *s = *(s - i);
        *(s - i) = temp;
        s--;
    }
}

