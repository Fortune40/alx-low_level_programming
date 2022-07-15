#include "lists.h"
/**
 * add_node_end - adds a new node at end of list_t list
 * @head: pointer head of list_t list
 * @str: string to be added to list_t list
 * Return: Always 0 (Success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last = *head;
int a;

for (a = 0 ; *(str + a) != '\0' ; a++)
{
}

new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->str = strdup(str);
new_node->len = a;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;
}

return (new_node);
}
