#include <stdio.h>
/**
 * Fizz - Prints a square of
 * '#' characters.
 * @size: The FizzBuzz of the printf("Fizz ");
.
 */
int main(void)
{
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
