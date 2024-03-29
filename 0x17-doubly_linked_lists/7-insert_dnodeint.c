#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry point.
 * @h:pointer value.
 * @idx: unsigned int value.
 * @n: int value
 * Return: Always 0 (Success)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node, *tmp = *h;
unsigned int count = 0;

node = malloc(sizeof(dlistint_t));
if (!node)
return (NULL);
node->n = n;
if (!tmp && idx > 0)
{free(node);
return (NULL);
}
if (idx == 0)
{
if (!tmp)
node->next = tmp;
else
{node->next = tmp;
tmp->prev = node;
}
node->prev = NULL;
*h = node;
return (node);
}
while (count < (idx - 1))
{
if (!tmp)
{
free(node);
return (NULL);
}
count++;
tmp = tmp->next;
}
node->next = tmp->next;
node->prev = tmp;
if (tmp->next)
tmp->next->prev = node;
tmp->next = node;
return (node);
}
