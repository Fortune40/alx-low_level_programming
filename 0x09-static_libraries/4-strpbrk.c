#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 * Return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int x, y;

for (x = 0; *(s + x) != '\0'; x++)
{
for (y = 0; *(accept + y) != '\0'; y++)
{
if (*(s + x) == *(accept + y))
return (s + x);
}
}
return ('\0');
}
