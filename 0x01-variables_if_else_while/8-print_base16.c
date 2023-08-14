#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the last digit of a number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
