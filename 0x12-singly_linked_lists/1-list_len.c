#include "lists.h"
/**
 * list_len - finds number of element in linked list_t list
 * @h: the linked list_t list
 * Return: Always 0 (Success)
 */
size_t list_len(const list_t *h)
{
size_t a;
list_t *list;

list = (list_t *)h;

for (a = 0; list != NULL; a++)
{
list = list->next;
}
return (a);
}
