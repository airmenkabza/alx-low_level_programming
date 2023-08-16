#include <stdio.h>
#include <main.h>
/**
 * _islower - Checks if a character is lowercase.
 *  The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
int main(void)
{
char testChars[] = {'a', 'B', 'c'};
size_t i;
for (i = 0; i < sizeof(testChars) / sizeof(testChars[0]); i++)
{
printf("%d", _islower(testChars[i]));
}
putchar('\n');
return (0);
}
