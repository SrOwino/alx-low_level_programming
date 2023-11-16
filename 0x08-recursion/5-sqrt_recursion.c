#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return -1;

if (n == 0 || n == 1)
return n;

return _sqrt_helper(n, 1);
}

/**
 * _sqrt_helper - A helper function for finding the square root recursively.
 * @n: The original number.
 * @i: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if no natural square root is found.
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return i;

if (i * i > n)
return -1;

return _sqrt_helper(n, i + 1);
}

