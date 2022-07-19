#include "lists.h"

/**
 * print_listint - print all elements of list
 * @h: head of the list
 * Return: Always 0 (Success)
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}

return (nodes);
}
