#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
int i, digit;

for (i = 0; i < 10; i++)
{
for (digit = 0; digit <= 14; digit++)
{
if (digit > 9)
{
_putchar((digit / 10) + '0');
}
_putchar((digit % 10) + '0');
}

_putchar('\n');
}
}

