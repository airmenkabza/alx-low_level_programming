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
char lowercase, uppercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');
return (0);
}
