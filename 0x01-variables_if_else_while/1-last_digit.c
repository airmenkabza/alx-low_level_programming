#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the last digit of a random number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() % 100;
lastDigit = n % 10;
printf("Last digit of %d is ", n);
if (lastDigit > 5)
{
printf("%d and is greater than 5\n", lastDigit);
}
else if (lastDigit == 0)
{
printf("%d and is 0\n", lastDigit);
}
else
{
printf("%d and is less than 6 and not 0\n", lastDigit);
}
return (0);
}
