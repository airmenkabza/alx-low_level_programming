#include "main.h"
#include <stdio.h>
/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string.
 */
int __strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
void puts_half(char *str)
{
int length = __strlen(str);
int start_index;
if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}
for (int i = start_index; i < length; i++)
{
putchar(str[i]);
}
putchar('\n');
}
