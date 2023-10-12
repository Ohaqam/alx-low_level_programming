#include "3-calc.h"

/**
* main - program that performs simple operations.
* @argc: Parameter one.
* @argv: Parameter two.
* Return:Returns nothing.
*/


int main(int argc, char *argv[])
{

int n1, n2;
int (*fun)(int, int);
char *c = argv[2];
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if ((*c != '+' &&
*c != '-' &&
*c != '*' &&
*c != '/' &&
*c != '%') ||
*(c + 1) != 0)
{
printf("Error\n");
exit(99);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
if ((*c == '/' || *c == '%') && n2 == 0)
{
printf("Error\n");
exit(100);
}
fun = get_op_func(c);
printf("%d\n", fun(n1, n2));
return (0);
}
