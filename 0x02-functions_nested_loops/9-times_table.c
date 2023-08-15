#include <stdio.h>
/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
int row;
int col;
for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
int result;    
result = row * col;
if (col == 0)
{
printf("%d", result);
}
else
{
printf(", %2d", result);
}
}
putchar('\n');
}
}
int main(void)
{
times_table();
return (0);
}
