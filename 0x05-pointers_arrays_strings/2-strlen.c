#include "main.h"

/**
*_strlen - function that returns the length of a string
* @s: string tested
*Return: returns length;
*/

int _strlen(char *s)
{
int cnt, inc;
inc = 0;
 for (cnt = 0; s[cnt] != '\0'; cnt++)
inc++;

return (inc);
}
