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
for (n2 = n1 ; n2 < 10 ; n2++)
{
if(n1 != n2 && n1 < n2)
{
putchar(n1 + 48);
putchar(n2 + 48);
if (n1 + n2 != 17)
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
