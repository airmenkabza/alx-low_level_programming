#include "main.h"
/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the input string.
 * This function calculates and returns the
 * length of the input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

return (length);
}
