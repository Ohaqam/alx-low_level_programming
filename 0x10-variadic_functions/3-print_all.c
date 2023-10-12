#include "variadic_functions.h"

/**
* print_all - function that prints anything.
* @format:    Parameter one.
* @...:       Parameter two.
*/


void print_all(const char * const format, ...)
{

va_list l;
int i;
char *str;

i = 0;
va_start(l, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(l, int));
break;
case 'i':
printf("%d", va_arg(l, int));
break;
case 'f':
printf("%f", va_arg(l, double));
break;
case 's':
str = va_arg(l, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
}
if ((format[i] == 'c' ||
format[i] == 'i' ||
format[i] == 'f' ||
format[i] == 's') && format[(i + 1)] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(l);
}
