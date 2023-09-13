#include "main.h"

/**
*print_last_digit - function that print last digit of a number
*@i: number to be targeted
*Return: returns 0
*/

int print_last_digit(int i)
{
int ld;
if (i < 0)
{
ld = -1 * (i % 10);
}
else
ld = i % 10;
_putchar(ld + '0');
return (ld);
}

