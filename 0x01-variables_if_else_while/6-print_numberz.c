#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -> prints all single digit numbers
 *of base 10 starting form 0
 *Return: always 0 (success)
 */
int main(void)
{
int ch = 0;

while (ch < 10)
{
putchar(ch + '0');
ch++;
}
putchar('\n');
return (0);
}
