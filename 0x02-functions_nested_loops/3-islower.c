#include"main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * return: 1 if @c is a lowercase character, 0 otherwise
 */

int  _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
return (0);

}
