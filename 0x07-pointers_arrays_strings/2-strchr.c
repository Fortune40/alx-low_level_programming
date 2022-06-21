#include "main.h"
/**
 *_strchr - function that locates a character in a string
 * @c: another character
 * @s: string given
 * Return: a string
 */
char *_strchr(char *s, char c)
{
int x;

while (1)
{
x = *s++;
if (x == c)
{
return (s - 1);
}
if (x == 0)
{
return (NULL);
}
}
}
