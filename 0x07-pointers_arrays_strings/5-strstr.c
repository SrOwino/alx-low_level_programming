#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string.
 * @needle: Pointer to the substring.
 *
 * Return: Pointer to the beginning of the located substring, else NULL.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
return haystack;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}

if (needle[j] == '\0')  // If the entire substring is found
return &haystack[i];
}

return (NULL);
}
