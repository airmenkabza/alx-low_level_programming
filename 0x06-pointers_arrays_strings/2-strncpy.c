#include "main.h"
/**
 * _strncat - Concatenates two strings
 * using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, const char *src, int n)
{
char *original_dest = dest;
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (original_dest);
}
