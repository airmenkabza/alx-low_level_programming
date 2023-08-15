#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by a new line.
 */
void print_alphabet_x10(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
}
int main(void)
{
print_alphabet_x10();
return (0);
}
