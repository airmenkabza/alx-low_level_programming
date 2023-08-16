#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = -n;
last_digit = n % 10;
putchar(last_digit + '0');
return (last_digit);
}
int main(void)
{
int testNumbers[] = {-123, 0, 456, -789};
size_t i;
for (i = 0; i < sizeof(testNumbers) / sizeof(testNumbers[0]); i++)
{
printf("Last digit: %d\n", print_last_digit(testNumbers[i]));
}
return 0;
}
