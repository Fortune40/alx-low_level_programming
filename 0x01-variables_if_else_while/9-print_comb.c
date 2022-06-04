#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -> prints numbers with ,
 *Return: Always 0 (Success)
 */
int main(void)
{
int ch = 0;

while (ch <= 9)
{
putchar(ch + '0');
if (ch != 9)
{
putchar(',');
putchar(' ');
}
ch++;
}
putchar('\n');
return (0);
}
