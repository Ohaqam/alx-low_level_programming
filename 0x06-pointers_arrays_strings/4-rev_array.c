#include "main.h"

/**
* reverse_array - function that reverses content in array of integers.
* @a:             Parameter One.
* @n:             Parameter Two.
* Return:         Returns nothing.
*/

void reverse_array(int *a, int n)
{

int rep, i;

for (i = n - 1; i > n / 2; i--)
{
rep = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = rep;
}
return ();
}
