#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i, j, k;
int sum;

for (i = 0, j = 0, k = 0; (n1[i] != '\0' && n2[j] != '\0') && k < size_r; i++, j++, k++)
{
sum = (n1[i] - '0') + (n2[j] - '0') + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
}

if (k == size_r || (n1[i] != '\0' && n2[j] != '\0'))
return 0;

for (; n1[i] != '\0' && k < size_r; i++, k++)
{
sum = (n1[i] - '0') + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
}

for (; n2[j] != '\0' && k < size_r; j++, k++)
{
sum = (n2[j] - '0') + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
}

if (carry > 0 && k < size_r)
{
r[k] = carry + '0';
k++;
}

if (k == size_r)
return 0;

r[k] = '\0';

return r;
}

