#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @d: number to be computed
 * Return: value of number or zero
 */
int _abs(int d)
{

if (d < 0)

{
int abs_val;

abs_val = d * -1;
return (abs_val);
}
return (d);
}
