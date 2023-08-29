#include "main.h"
/**
 * _strncat - Concatenates two strings
 * using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to use
 * from src.
 * Return: A pointer to the resulting
 * string @dest.
 */
char *_strncat(char *dest, const char *src, int n)
{
char *original_dest = dest;
while (*dest)
{
dest++;
}
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (original_dest);
}
