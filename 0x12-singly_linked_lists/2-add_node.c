#include "lists.h"
/**
 * add_node - add a new node at the beginning
 * @head: head of linked list
 * @str: string to store in list
 * Return: Always 0 (Success)
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int a = 0;

new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
while (*(str + a) != '\0')
{
a++;
}

new_node->len = a;
new_node->str = strdup(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
