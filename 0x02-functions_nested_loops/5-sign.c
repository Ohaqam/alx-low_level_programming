#include "main.h"

/**
* print_sign - checks
* @c: prints the sign of a number
* Return: Always 0.
*/

int print_sign(int n)
{
if (n > 0)
{
return (+1);
_putchar(43 + '1');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else
return (-1);
_putchar(45 + '1');
}
