#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -> prints all combinations of three digits
 *Return: always 0 (Success)
 */
int main(void)
{
int i, j, k, l;

for (i = 0; i <= 999; i++)
{
j = i / 100;
k = (i / 10) % 10;
l = i % 10;
if (j < k && k < i)
{
putchar(j + '0');
putchar(k + '0');
putchar(l + '0');
if (i != 789)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
