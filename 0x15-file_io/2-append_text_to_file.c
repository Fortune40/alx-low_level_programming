#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if file exists. -1 if fails doesn't exist or fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i, j, k = 0;

if (!filename)
{
return (-1);
}
if (!text_content)
{
text_content = "";
}
i = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
if (i < 0)
{
return (-1);
}
while (text_content[k])
{
k++;
}
j = write(i, text_content, k);
if (j < 0)
{
close(i);
return (-1);
}
close(i);
return (1);
}
