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
for (n1 = 0 ; n1 < 10 ; n1++)
{
for (n2 = 0 ; n2 < 10 ; n2++)
{
putchar((n1 % 10) + '0');
putchar((n2 % 10) + '0');
if (n1 == 9 && n2 == 9)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
