#include <stdio.h>
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * This function reverses the characters of
 * the input string in place.
 */
void rev_string(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
for (int i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
