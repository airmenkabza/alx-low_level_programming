#include "main.h"
/**
 * _strncat - Concatenates two strings, using at
 * most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;
int src_index = 0;
while (*dest_ptr != '\0')
dest_ptr++;
while (src[src_index] != '\0' && src_index < n)
{
*dest_ptr = src[src_index];
dest_ptr++;
src_index++;
}
*dest_ptr = '\0';
return (dest);
}
