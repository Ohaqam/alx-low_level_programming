#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
hex n = 0;
while (n < 16)
{
putchar((n % 16) + '0');
n++;
}
putchar('\n');
return (0);
}
