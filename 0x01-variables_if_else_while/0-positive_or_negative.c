#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and prints its sign.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
int n = 0;
srand(time(0));            // Seed the random number generator using the current time
n = rand() - RAND_MAX / 2; // Generate a random number between -RAND_MAX/2 and RAND_MAX/2
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
} else if (n == 0)
{
printf("%d is zero\n", n);
}

return 0;
}

