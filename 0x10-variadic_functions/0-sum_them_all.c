#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n:            Parameter one.
* @...:          Parameter two.
* Return:        Returns SUM.
*/

int sum_them_all(const unsigned int n, ...)
{

va_list l;
unsigned int i, SUM = 0;

if (n == 0)
{
return (0);
}
va_start(l, n);
for (i = 0; i < n; i++)
{
SUM += va_arg(l, int);
va_end(l);
}
return (SUM);
}
