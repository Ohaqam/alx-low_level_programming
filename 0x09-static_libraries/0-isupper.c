#include "main.h"

/**
* _isupper - function that verifies a character if uppercase or not
* @c:        Parameter one.
* Return:    Returns 1 if uppercase else 0.
*/


int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
