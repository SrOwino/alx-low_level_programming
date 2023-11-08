#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string `str`.
 */
char *cap_string(char *str)
{
char *ptr = str;
int capitalize = 1;

while (*str != '\0')
{    
if (isspace(*str) || ispunct(*str))
{
capitalize = 1;
}
else if (capitalize)
{
*str = toupper(*str);
capitalize = 0;
}

str++;
}

return (ptr);
}
