#include "main.h"

/**
* is_prime_number - function returns 1 if input is prime number, otherwise return 0.
* @n:      Parameter one.
* Return:  Returns prime number.
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime(n, start));
}

int is_prime(int n, int start)
{
if (start <= 1)
return (1);
else if (n % start == 0)
return (0);
return (is_prime(n, start - 1));
}
