#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b:              Parameter One.
* Return:          Returns i.
*/

unsigned int binary_to_uint(const char *b)
{

unsigned int i;
int l, b2;

if (!b)
return (0);
i = 0;
for (l = 0; b[l] != '\0'; l++)
;
for (l--, b2 = 1; l >= 0; l--, b2 *= 2)
{
if (b[l] != '0' && b[l] != '1')
{
return (0);
}
if (b[l] & 1)
{
i += b2;
}
}
return (i);
}
