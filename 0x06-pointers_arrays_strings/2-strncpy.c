#include "main.h"

/**
 * _strncpy - Copies a string with a limit on the number of characters.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
int i;

for (i = 0; i < n && *src != '\0'; i++)
{
*dest = *src;
dest++;
src++;
}

while (i < n)
{
*dest = '\0';
dest++;
i++;
}

return (ptr);
}
