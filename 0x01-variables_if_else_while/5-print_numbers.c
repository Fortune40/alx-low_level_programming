#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -> prints numbers of base 10 starting from 0
 *Return: always 0 (Success)
 */
int main(void)
{
int ch = 0;
while (ch < 10)
{
printf("%d", ch);
ch++;
}
putchar('\n');
return (0);
}
