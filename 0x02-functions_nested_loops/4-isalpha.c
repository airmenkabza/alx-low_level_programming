#include <stdio.h>
/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
int main(void)
{
char testChars[] = {'a', 'B', '3', 'C'};
int i;
for (i = 0; i < sizeof(testChars) / sizeof(testChars[0]); i++)
{
printf("%d", _isalpha(testChars[i]));
}
putchar('\n');
return (0);
}
