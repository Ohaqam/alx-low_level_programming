#include "main.h"

/**
* is_prime_number - function retn 1 if input prime number,o/w return 0.
* @n:      Parameter one.
* Return:  Returns prime number.
*/

int is_prime_number(int n)
{

int s = n / 2;

if (n <= 1)
return (0);
return (is_prime(n, s));
}


/**
* is_prime - function that returns prime number.
* @n:        Parameter one.
* @s:        Parameter two.
* Return:    Returns prime.
*/

int is_prime(int n, int s)
{
if (s <= 1)
return (1);
else if (n % s == 0)
return (0);
return (is_prime(n, s - 1));
}
