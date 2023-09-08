#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
char n = '0';
while (n <= 'f')
{
putchar((n % 16) + '0');
n++;
}
putchar('\n');
return (0);
}
