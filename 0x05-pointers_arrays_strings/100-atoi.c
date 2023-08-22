/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * This function converts the given string
 * to an integer, taking into account
 * the possible signs before the number.
 * It returns the converted integer.
 * If there are no numbers in the string,
 * it returns 0.
 */
#include "main.h"
int _atoi(char *s)
{
int result;
int sign;
int i;
result = 0;
sign = 1;
i = 0;
while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
{
i++;
}
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (result * sign);
}
