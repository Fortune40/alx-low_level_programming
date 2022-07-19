#include "lists.h"

/**
 * add_nodeint_end - add new node at end of linked list
 * @head: head of a list
 * @n: integer for new node to contain
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, last;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}

return (*head);
}
