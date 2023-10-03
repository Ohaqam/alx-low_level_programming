#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
* @s:      Parameter one.
* @b:      Parameter two.
* @n:      Parameter three.
* Return:  Returns s.
*/

char *_memset(char *s, char b, unsigned int n)
{
do
{
s[n - 1] = b;
n--;
}
while (n);
return (s);
}
