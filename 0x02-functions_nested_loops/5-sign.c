#include <stdio.h>
#include "main.h"
/**
 * print_sign - Prints the sign of a
 * number.
 * The number to be checked.
 *
 * Return: 1 and prints +
 * if n is greater than zero,
 * 0 and prints 0 if n is zero,
 *-1 and prints -
 *  if n is less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
