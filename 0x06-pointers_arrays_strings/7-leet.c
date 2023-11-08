#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string `str`.
 */
char *leet(char *str)
{
char *ptr = str;
char leetMap[5][2] = {
{'a', '4'},
{'e', '3'},
{'o', '0'},
{'t', '7'},
{'l', '1'}
};

while (*str != '\0')
{
for (int i = 0; i < 5; i++)
{
if (*str == leetMap[i][0] || *str == leetMap[i][1])
{
*str = leetMap[i][1];
break;
}
}

str++;
}

return (ptr);
}
