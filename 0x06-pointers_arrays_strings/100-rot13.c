#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string `str`.
 */
char *rot13(char *str)
{
char *ptr = str;
int i;

while (*str != '\0')
{
for (i = 0; i < 2; i++)
{
if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
{
if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
*str += 13;
else
*str -= 13;

break;
}
}

str++;
}

return (ptr);
}
