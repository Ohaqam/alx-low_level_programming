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
_putchar('0' + 1);
}
else
_putchar('0' + c%10);
return (0);
}
