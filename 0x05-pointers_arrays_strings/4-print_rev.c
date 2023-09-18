#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
  int len = 0, i;

for (i = 0; s[len] >=0 ; i++)
{
_putchar(s[len]);
}
_putchar('\n');
}
