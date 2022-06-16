#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @m: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *m)
{
int count = 0, i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(m + count) != '\0')
{
for (i = 0; i < 52; i++)
{
if (*(m + count) == alphabet[i])
{
*(m + count) = rot13[i];
break;
}
}
count++;
}
return (m);
}
