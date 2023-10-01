#include "main.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n:               Parameter one.
* Return:           Returns sqrt.
*/


int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);
return (_sqrt(0, n));
}

/**
* * _sqrt - function that returns square root.
*/

int _sqrt(int n, int x)
{
if (n > x / 2)
return (-1);
else if (n * n == x)
return (n);
return (_sqrt(n + 1, x));
}
