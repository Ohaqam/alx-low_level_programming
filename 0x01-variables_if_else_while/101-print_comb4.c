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
int n3;
for (n1 = 0 ; n1 < 10 ; n1++)
{
for (n2 = n1 ; n2 < 10 ; n2++)
{
for (n3 = n2 ; n3 < 10 ; n3++)
{
if (n1 != n2 && n2 != n3 && n1 < n2 && n2 < n3)
{
putchar(n1 + 48);
putchar(n2 + 48);
putchar(n3 + 48);
if (n1 + n2 + n3 != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
