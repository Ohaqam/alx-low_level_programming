#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
int len = 0, index = 0;
len = *s;

 for (index = len - 1; index <= (sizeof(len)/sizeof(len[0]) - 1) ; index--)
_putchar(s[index]);

_putchar('\n');
}
