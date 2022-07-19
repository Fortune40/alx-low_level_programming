#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: head of list.
 * @index: index of node.
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index && head != NULL; node++)
{
head = head->next;
}

return (head);
}
