#include <stdio.h>
#include <main.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the string "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "_putchar";
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
putchar('\n');
return (0);
}
