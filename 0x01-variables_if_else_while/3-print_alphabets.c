#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char c = 'a';
while (c <= 'z' || c<= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

