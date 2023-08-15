#include <stdio.h>
/**
 *_abs - Computes the absolute value of an integer.
 *The integer for which to compute the absolute value.
 *Return: The absolute value of n.
 */
int _abs(int n)
{
if (n < 0)
return (-n);
else
return (n);
}
int main(void)
{
int testValues[] = {-1, 0, 1, -98};
size_t i;
for (i = 0; i < sizeof(testValues) / sizeof(testValues[0]); i++)
{
printf("%d\n", _abs(testValues[i]));
}
return (0);
}
