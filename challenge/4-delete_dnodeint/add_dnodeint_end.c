#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *l;

    /* Allocate memory for the new node */
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }

    /* Initialize the new node */
    new->n = n;
    new->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL)
    {
        *head = new;
        new->prev = NULL;
        return (new);
    }

    /* Traverse to the end of the list */
    l = *head;
    while (l->next != NULL)
    {
        l = l->next;
    }

    /* Add the new node at the end of the list */
    l->next = new;
    new->prev = l;

    /* Vérification supplémentaire : s'assurer que le nœud est bien lié */
    if (new->prev != l || l->next != new)
    {
        /* Si la liaison échoue, libérer le nouveau nœud et retourner NULL */
        free(new);
        return (NULL);
    }

    /* Retourner le nouveau nœud ajouté */
    return (new);
}
