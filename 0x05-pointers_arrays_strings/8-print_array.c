#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an
 * array of integers, followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 * This function prints the first n elements
 * of the input array of integers,
 * separated by comma and space, followed by
 * new line character.
 */
void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1) 
{
printf(", ");
}
}
printf("\n");
}
