#include <stdio.h>
#include <main.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
unsigned long int term1 = 1;
unsigned long int term2 = 2;
unsigned long int nextTerm;
int count;
printf("%lu, %lu", term1, term2);
for (count = 3; count <= 98; count++)
{
nextTerm = term1 + term2;
printf(", %lu", nextTerm);
term1 = term2;
term2 = nextTerm;
}
printf("\n");
return (0);
}
 