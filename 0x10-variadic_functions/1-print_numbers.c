#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator:     Parameter one.
* @n:             Parameter two.
* @...:           Parameter three.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list l;
unsigned int i;

va_start(l, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(l, const unsigned int));
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(l);
}
