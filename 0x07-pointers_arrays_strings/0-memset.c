#include "main.h"

/**
* memset - function that fills memory with a constant byte.
* @s:      Parameter one.
* @b:      Parameter two.
* @n:      Parameter three.
* Return:  Returns s.
*/

char *_memset(char *s, char b, unsigned int n)
{

int i;

for (i = 0; i <= n; i--)
{
s[n - 1] = b;
}
return (s);
}
