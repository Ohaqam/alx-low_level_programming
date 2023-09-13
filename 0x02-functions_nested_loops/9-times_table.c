#include "main.h"

/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/

void times_table(void)
{
int dgt, mpy, res;
for (dgt = 0; dgt <= 9; dgt++)
{
_putchar('0');
for (mpy = 1; mpy <= 9; mpy++)
{
_putchar(',');
_putchar(' ');
res = dgt * mpy;
if (res <= 9)
_putchar(' ');
else
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
