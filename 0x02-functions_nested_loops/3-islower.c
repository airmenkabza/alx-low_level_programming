#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks if
 *  The character to be
 *Return: 1 if c is lowercase, 0
 */
int _islower(int c) /*int c param*/
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
