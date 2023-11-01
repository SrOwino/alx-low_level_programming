#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: The alpabetic character to be checked
 *
 * retun: 1 for alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{

if (c >= 65 && c <= 122)
{
return (1);
}
return (0);

}

