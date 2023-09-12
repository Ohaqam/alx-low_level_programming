#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
  _putchar((c % 10) + '1');
}
else
_putchar((c % 10) + '0');
return (0);
}
