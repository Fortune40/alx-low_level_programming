#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 * @h: the list_t list
 * Return: Always 0 (Success)
 */
size_t print_list(const list_t *h)
{
size_t a;
list_t *list;

list = (list_t *)h;

for (a = 0; list != NULL; a++)
{
if (list->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%i] %s\n", list->len, list->str);
}

list = list->next;
}
return (a);
}
