#include <stdio.h>
/**
 * add - Adds two integers.
 * The first integer.
 * The second integer.
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
return (a + b);
}
int main(void)
{
int num1;
int num2;
int sum;
num1 = 40, 
num2 = 58;
sum = add(num1, num2);
printf("Sum: %d\n", sum);
return (0);
}
