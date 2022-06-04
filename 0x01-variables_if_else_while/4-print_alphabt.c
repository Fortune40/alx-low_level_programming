#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -> prints the alphabet in lowercase
 *except the letter q and e
 *Return: always 0 (Success)
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
{
ch++;
continue;
}
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
