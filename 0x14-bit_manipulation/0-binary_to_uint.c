#include "main.h"

/**
* clear_bit - function that converts a binary number to an unsigned int.
* @n: Parameter one.
* @i: Parameter two.
* Return: Returns 1 or -1.
*/

int clear_bit(unsigned long int *n, unsigned int i)
{

unsigned int y;

if (i > 63)
return (-1);
y = 1 << i;
if (*n & y)
*n ^= y;
return (1);
}
