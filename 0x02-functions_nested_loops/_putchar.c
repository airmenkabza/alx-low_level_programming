#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output (stdout)
 * The character to be written
 *
 * Return: On success, returns the number of characters written.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
