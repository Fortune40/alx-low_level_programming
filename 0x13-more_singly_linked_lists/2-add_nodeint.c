#include "lists.h"

/**
 * add_nodeint - Adds a new node at beginning of list
 * @head: pointer to head of list
 * @n: interger for new node to contain
 * Return: Always 0 (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
