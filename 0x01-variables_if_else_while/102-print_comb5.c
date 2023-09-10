#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n1;
int n2;
for (n1 = 0 ; n1 < 100 ; n1++)
{
for (n2 = n1 ; n2 < 100 ; n2++)
{
if (n2 != n1)
{
putchar((n1 /10) + 48);
putchar((n1 % 10) + 48);
putchar(' ');
putchar((n2 / 10) + 48);
putchar((n2 % 10) + 48);
if (n1 != 98 || n2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
