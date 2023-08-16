#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints the n times table.
 * The value for which to print the times table.
 */
void print_times_table(int n)
{
int row;
int col;
if (n < 0 || n > 15) 
{
return;
}
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
int result;          
result = row * col;
printf("%d", result);
if (col != n)
{
printf(", ");
if (result < 10)
{
printf(" ");
}
if (result < 100)
{
printf(" ");
}
}
}
putchar('\n');
}
}
int main(void)
{
print_times_table(3);
print_times_table(5);
print_times_table(12);
return (0);
}
