#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s:                 Parameter one.
* Return:             Returns l.
*/

int _strlen_recursion(char *s)
{

int l = 0;

if (*s != '\0')
{
l++;
l += _strlen_recursion(s + 1);
}
return (l);
}
