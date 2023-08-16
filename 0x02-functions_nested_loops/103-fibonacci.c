#include <stdio.h>
#include <main.h>
/**
 * main - Entry point of the program.
 *
 * Description: Calculates and prints the sum of even-valued terms in the Fibonacci sequence
 *              whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int term1;
int term2;
int nextTerm;
int sum;
term1= 1;
term2 = 2; 
sum = 0;
while (term1 <= 4000000)
{
if (term1 % 2 == 0)
{
sum += term1;
}
nextTerm = term1 + term2;
term1 = term2;
term2 = nextTerm;
}
printf("%d\n", sum);
return (0);
}
