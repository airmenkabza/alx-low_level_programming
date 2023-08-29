#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: The difference between the ASCII
 * values of the first differing characters,
 * or 0 if the strings are equal.
 */
int _strcmp(const char *s1, const char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2) 
{
return (*s1 - *s2);
}
s1++;
s2++;
}
if (*s1 || *s2)
{
return (*s1 - *s2);
}
return (0);
}
