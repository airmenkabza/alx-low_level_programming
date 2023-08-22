#include "main.h"
/**
 * puts2 - Prints every other character of a
 * string, starting with the first character.
 * @str: Pointer to the string to be printed.
 * This function prints every other character
 * of the input string, starting with
 * the first character, followed by a new
 * line character.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}
putchar('\n');
}
