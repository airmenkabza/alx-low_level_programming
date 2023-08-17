#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n = 612852475143;
long int divisor = 2;
long int max_prime;
while (n > 1)
{
if (n % divisor == 0)
{
max_prime = divisor;
n /= divisor;
}
else
{
divisor++;
}
}
printf("%lu\n", max_prime);
return 0;
}
