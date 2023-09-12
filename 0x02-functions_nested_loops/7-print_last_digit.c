#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/


int print_last_digit(int i)
{
int ld;
if (i < 0)
{
ld = -1 * (i % 10);
}
else
ld = n % 10;
_putchar(ld + '0');
return (ld);
}

