#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char c = 'a';
 if (c <= 'z' && !('e' || 'q'))
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

