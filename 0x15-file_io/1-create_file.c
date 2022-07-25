#include "main.h"

/**
 * create_file - creates file
 * @filename: filename
 * @text_content: content writed in file
 * Return: 1 if success. -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
int i, j, k = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (k = 0; text_content[k];)
k++;
}

i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
j = write(i, text_content, k);

if (i == -1 || j == -1)
return (-1);

close(i);
return (1);
}
