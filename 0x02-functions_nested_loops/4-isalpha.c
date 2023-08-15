#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: the character to be checked
 * Return:  1 if c is a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{

if ((c <= 65 && >= 97) || (c <= 97 && >= 122))
{
return (1);
}
return (0);
}
