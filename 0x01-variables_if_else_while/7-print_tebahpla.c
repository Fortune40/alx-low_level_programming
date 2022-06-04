#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -> prints lowercase alphabet in reverse
 *Return: always 0 (success)
 */
int main(void)
{
char ch = 'z';

while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
