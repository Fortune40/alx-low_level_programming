#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: head of a list
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *truth, *lies;

if (head == NULL || head->next == NULL)
return (NULL);

truth = head->next;
lies = (head->next)->next;

while (lies)
{
if (truth == lies)
{
truth = head;
while (truth != lies)
{
truth = truth->next;
lies = lies->next;
}
return (truth);
}

truth = truth->next;
lies = (lies->next)->next;
}

return (NULL);
}
