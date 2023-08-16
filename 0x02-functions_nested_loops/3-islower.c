#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks if
 *  The character to be
 *Return: 1 if c is lowercase, 0
 */
 /*int c param*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
