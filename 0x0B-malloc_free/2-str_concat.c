#include "main.h"
#include <stdlib>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space containing concat str
 */

char *str_concat(char *s1, char *s2)
{
char *concat_str;
int i, concant_i = 0, j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
j++;
concat_str = malloc(sizeof(char) * j);
if (concat_str == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
concat_str[concat_i++] = s1[i];
for (i = 0; s2[i]; i++)
concat_str[concat_i++] = s2[i];

return (concat_str);
}
