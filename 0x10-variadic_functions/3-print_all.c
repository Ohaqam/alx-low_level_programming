#include "variadic_functions.h"

/**
* print_all - function that prints anything.
* @format:    Parameter one.
* @...:       Parameter two.
*/


void print_all(const char * const format, ...)
{

va_list lists;
int i;
char *string;

i = 0;
va_start(lists, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(lists, int));
break;
case 'i':
printf("%d", va_arg(lists, int));
break;
case 'f':
printf("%f", va_arg(lists, double));
break;
case 's':
string = va_arg(lists, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
break;
}
if ((format[i] == 'c' ||
format[i] == 'i' ||
format[i] == 'f' ||
format[i] == 's') &&
format[(i + 1)] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(lists);
}
