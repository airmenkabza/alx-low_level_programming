#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the last digit of a number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand();
lastDigit= n % 10;
if (lastDigit < 0)
{
lastDigit = -lastDigit;
}
printf("Last digit of %d is %d and is ", n, lastDigit);
if (lastDigit == 0)
{
printf("0\n");
}
else if (lastDigit > 5)
{
printf("greater than 5\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
